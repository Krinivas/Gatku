#pragma once
#include <qdatastream.h>
#include <QDate>
#include <qstring.h>

struct PaymentsRow
{
public:
	PaymentsRow();
	~PaymentsRow();
	QString date_;
	QString operation_;
	QString value_;
	QString balance_;
	QString sender_;
	QString senderAccount_;
	QString tittle_; 
};

