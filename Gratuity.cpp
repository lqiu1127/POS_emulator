#include "Gratuity.h"



double Gratuity::processTransaction(double amount)
{
	return gratuityPercentage / 100 * amount;
}

void Gratuity::setSpecialAmount(double gratuityPercentage)
{
	if (gratuityPercentage > 0 && gratuityPercentage < 100)
		this->gratuityPercentage = gratuityPercentage;
	else
		this->gratuityPercentage = 0;

}

std::string Gratuity::toString()
{
	return "gratuity percentage";
}

Gratuity::Gratuity()
{
}


Gratuity::~Gratuity()
{
}
