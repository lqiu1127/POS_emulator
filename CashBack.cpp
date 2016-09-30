#include "CashBack.h"



double CashBack::processTransaction(double amount)
{
	//cashback gives cash back, thus negative value
	return cashBack;
}

void CashBack::setSpecialAmount(double cashBack)
{
	//assume cash back is percentage (is there more than 100% cash back?
	if (cashBack > 0)
		this->cashBack = cashBack;
	else
		this->cashBack = 0;
}

std::string CashBack::toString()
{
	return "cashback";
}

CashBack::CashBack()
{
}


CashBack::~CashBack()
{
}
