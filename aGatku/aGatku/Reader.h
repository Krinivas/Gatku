#pragma once

#include <qfile.h>
#include "PaymentsRow.h"

class Reader
{
public:
	Reader(QString fileName);
	~Reader();
	QStringList getData();
private:
	QString fileName_;
};

