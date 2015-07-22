#include "DataTransformer.h"


DataTransformer::DataTransformer()
{
}


DataTransformer::~DataTransformer()
{
}

std::vector<PaymentsRow> DataTransformer::prepareRows(QStringList rows){
	std::vector<PaymentsRow> output;

	for (int i = 1; i < rows.size() - 1; i += 1){
		PaymentsRow paymentRow = getRowFromString(rows[i]);
		output.push_back(paymentRow);
	}
	return output;
}

QString DataTransformer::getDate(QString date){
	QString dayString, monthString, yearString;
	yearString.append(date[1]).append(date[2]).append(date[3]).append(date[4]);
	monthString.append(date[5]).append(date[6]);
	dayString.append(date[7]).append(date[8]);
	return QString().append(dayString).append("-").append(monthString).append("-").append(yearString);
}

PaymentsRow DataTransformer::getRowFromString(QString row){
	QCharRef splitChar = row[row.size() - 1];
	QStringList values = row.split(QString().append(splitChar).append(',').append(splitChar));
	PaymentsRow paymentRow;
	paymentRow.date_ = getDate(values[0]);
	paymentRow.value_ = values[2];
	paymentRow.sender_ = values[5];
    paymentRow.tittle_ = fixTittle(values[11]);

	return paymentRow;
}

QString DataTransformer::fixTittle(QString tittle){
    QString result;
    for (int i = 0; i < tittle.size() - 2; i ++){
        result.append(tittle[i]);
    }
    return result;
}
