#include "Reader.h"
#include "PaymentFilter.h"


Reader::Reader(QString fileName) : fileName_(fileName)
{}

Reader::~Reader()
{}


QStringList Reader::getData(){
	QString data;
	QStringList rows;
	QFile file(fileName_);
	if (file.open(QIODevice::ReadOnly))
	{
		data = file.readAll();
		rows = data.split('\n');
		file.close();
	}
	return rows;
}

