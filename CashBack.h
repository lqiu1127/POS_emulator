#pragma once
#include "Transactions.h"
class CashBack :
	public Transactions
{
	double cashBack;
public:
	double processTransaction(double);
	void setSpecialAmount(double);
	std::string toString();
	CashBack();
	~CashBack();
};

