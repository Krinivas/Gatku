#include "agatku.h"

Agatku::Agatku(QWidget *parent)
	: QMainWindow(parent)
{
	ui_.setupUi(this);
	connect(ui_.pushButtonBrowse, SIGNAL(clicked()), this, SLOT(choseFile()));
	connect(ui_.lineEditSearch, SIGNAL(textChanged(QString)), this, SLOT(reFilter(QString)));
	prepareTable(1);

}

Agatku::~Agatku()
{

}

void Agatku::choseFile(){
    fileName_ = QFileDialog::getOpenFileName(this, tr("Open File"), "", tr("Files (*csv)"));
	ui_.lineEditFile->setText(fileName_);
	payments_ = readPayments();
	showPayments();
}

void Agatku::showPayments(){
	QStringList filtredPayments = payments_;
	filtredPayments = PaymentFilter::capitalizationFilter(filtredPayments);
	if (ui_.lineEditSearch->text() != "")
		filtredPayments = PaymentFilter::filterIfContainsQString(filtredPayments, ui_.lineEditSearch->text());
	printPayments(DataTransformer::prepareRows(filtredPayments));
}

void Agatku::printPayments(std::vector<PaymentsRow> payments){
	prepareTable(payments.size());
	for (int i = 0; i < payments.size(); i++){
		QStandardItem *date = new QStandardItem(payments[i].date_);
		model_->setItem(i, 0, date);
        QStandardItem *tittle = new QStandardItem(payments[i].tittle_);
		model_->setItem(i, 1, tittle);
		QStandardItem *value = new QStandardItem(payments[i].value_);
		model_->setItem(i, 2, value);
        QStandardItem *sender = new QStandardItem(payments[i].sender_);
		model_->setItem(i, 3, sender);
	}
}

QStringList Agatku::readPayments(){
	Reader reader(fileName_);
	return reader.getData();
}

void Agatku::prepareTable(int rowCount){
	model_ = new QStandardItemModel(rowCount, 4, this);
	model_->setHorizontalHeaderItem(0, new QStandardItem(QString("DATA")));
    model_->setHorizontalHeaderItem(1, new QStandardItem(QString(trUtf8("TYTUŁ PRZELEWU"))));
	model_->setHorizontalHeaderItem(2, new QStandardItem(QString("KWOTA")));
	model_->setHorizontalHeaderItem(3, new QStandardItem(QString("NADAWCA")));
	
	ui_.tableViewPayments->setModel(model_);
    ui_.tableViewPayments->setColumnWidth(0, 7 * ui_.tableViewPayments->width() / 100);
    ui_.tableViewPayments->setColumnWidth(1, 41 * ui_.tableViewPayments->width() / 100);
    ui_.tableViewPayments->setColumnWidth(2, 10 * ui_.tableViewPayments->width() / 100);
    ui_.tableViewPayments->setColumnWidth(3, 41 * ui_.tableViewPayments->width() / 100);
}

void Agatku::reFilter(QString filter){
	filter_ = filter;
	showPayments();
}
