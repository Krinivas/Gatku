#pragma once
#include <qstring.h>
#include <qstringlist.h>
class PaymentFilter
{
public:
	PaymentFilter();
	~PaymentFilter();

	static QStringList filterIfContainsQString(QStringList list, QString filter);
	static QStringList filterIfNotContainsQString(QStringList list, QString filter);
	static QStringList capitalizationFilter(QStringList list);
};

