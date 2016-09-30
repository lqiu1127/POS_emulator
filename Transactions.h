#pragma once
#include <string>

class Transactions
{
	double amount;
public:
	virtual double processTransaction(double) = 0;
	virtual void setSpecialAmount(double) = 0;
	void setAmount(double);
	double getAmount();
	virtual std::string toString() = 0;
	Transactions();
	virtual ~Transactions();
};

