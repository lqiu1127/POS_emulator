#pragma once
#include "Transactions.h"
class CashAdvance :
	public Transactions
{
	double cashAdvance;
public:
	double processTransaction(double);
	void setSpecialAmount(double);
	std::string toString();
	CashAdvance();
	~CashAdvance();
};

