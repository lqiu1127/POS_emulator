#include "Transactions.h"



void Transactions::setAmount(double amount)
{
	if (amount > 0) {
		this->amount = amount;
	}
	else
		this->amount = 0;
}

double Transactions::getAmount()
{
	return amount;
}

Transactions::Transactions()
{
}


Transactions::~Transactions()
{
}
