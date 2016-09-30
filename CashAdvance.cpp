#include "CashAdvance.h"



double CashAdvance::processTransaction(double amount)
{
	return -cashAdvance;
}

void CashAdvance::setSpecialAmount(double cashAdvance)
{
	//assume cash advance is flat amount
	if (cashAdvance > 0)
		this->cashAdvance = cashAdvance;
	else
		this->cashAdvance = 0;
}

std::string CashAdvance::toString()
{
	return "cash advance";
}

CashAdvance::CashAdvance()
{
}


CashAdvance::~CashAdvance()
{
}
