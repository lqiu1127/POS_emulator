#include "Refund.h"



double Refund::processTransaction(double)
{
	return -refund;
}

void Refund::setSpecialAmount(double refund)
{
	//make sure refund is some positive value
	if (refund > 0)
		this->refund = refund;
	else
		this->refund = 0;
}

std::string Refund::toString()
{
	return "refund";
}

Refund::Refund()
{
}


Refund::~Refund()
{
}
