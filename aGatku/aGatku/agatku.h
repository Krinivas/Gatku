#ifndef AGATKU_H
#define AGATKU_H

#include <QtWidgets/QMainWindow>
#include <QFileDialog>
#include <qfile.h>
#include <qstandarditemmodel.h>
#include <memory>
#include <vector>
#include <qtextcodec.h>

#include "ui_agatku.h"
#include "PaymentsRow.h"
#include "Reader.h"
#include "PaymentFilter.h"
#include "DataTransformer.h"


class Agatku : public QMainWindow
{
	Q_OBJECT

public:
	Agatku(QWidget *parent = 0);
	~Agatku();

private:
	Ui::AgatkuClass ui_;
	QString fileName_;
	QString filter_;
	QStringList payments_;
	QStandardItemModel *model_;

private slots:
	void choseFile();
	void showPayments();
	QStringList readPayments();
	void prepareTable(int rowCount);
	void printPayments(std::vector<PaymentsRow> payments);
	void reFilter(QString filter);

};

#endif // AGATKU_H
