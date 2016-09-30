#include "SaleTransaction.h"



double SaleTransaction::processTransaction(double amount)
{
	return amount;
}

void SaleTransaction::setSpecialAmount(double amount)
{
	//there are no special amounts for a sale transaction
}

std::string SaleTransaction::toString()
{
	return "sales transaction";
}

SaleTransaction::SaleTransaction()
{
}


SaleTransaction::~SaleTransaction()
{
}
