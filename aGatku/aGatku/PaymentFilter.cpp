#include "PaymentFilter.h"


PaymentFilter::PaymentFilter()
{
}


PaymentFilter::~PaymentFilter()
{
}


QStringList PaymentFilter::filterIfContainsQString(QStringList list, QString filter){
	QStringList result;
	for (auto value : list){
		if (value.contains(filter, Qt::CaseInsensitive)){
			result.append(value);
		}
	}
	return result;
}

QStringList PaymentFilter::filterIfNotContainsQString(QStringList list, QString filter){
	QStringList result;
	for (auto value : list){
		if (!value.contains(filter, Qt::CaseInsensitive)){
			result.append(value);
		}
	}
	return result;
}

QStringList PaymentFilter::capitalizationFilter(QStringList list){
	return filterIfNotContainsQString(list, QString("kapitalizacja odsetek"));
}