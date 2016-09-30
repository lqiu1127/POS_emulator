#include "Card.h"


int Card::getPin()
{
	return pin;
}

std::string Card::getHolderName()
{
	return cardHolder;
}

int Card::getCardNum()
{
	return cardNumber;
}

Card::Card(int cardNumber, int pin, std::string cardHolder)
{
	this->cardHolder = cardHolder;
	this->cardNumber = cardNumber;
	this->pin = pin;
}

Card::Card()
{
}

Card::~Card()
{
}
