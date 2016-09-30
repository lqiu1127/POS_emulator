#pragma once
#include "Transactions.h"
class Refund :
	public Transactions
{
	double refund;
public:
	double processTransaction(double);
	void setSpecialAmount(double);
	std::string toString();
	Refund();
	~Refund();
};

