#pragma once
#include <vector>
#include "PaymentsRow.h"
class DataTransformer
{
public:
	DataTransformer();
	~DataTransformer();
	static std::vector<PaymentsRow> prepareRows(QStringList rows);
private:
	static QString getDate(QString date);
	static PaymentsRow getRowFromString(QString row);
    static QString fixTittle(QString tittle);
};

