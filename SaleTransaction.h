#pragma once
#include "Transactions.h"
class SaleTransaction :
	public Transactions
{
public:
	double processTransaction(double);
	void setSpecialAmount(double);
	std::string toString();
	SaleTransaction();
	~SaleTransaction();
};

