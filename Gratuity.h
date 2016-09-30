#pragma once
#include "Transactions.h"
class Gratuity :
	public Transactions
{
	double gratuityPercentage;
public:
	double processTransaction(double);
	void setSpecialAmount(double);
	std::string toString();
	Gratuity();
	~Gratuity();
};

