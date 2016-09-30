#pragma once
#include <string>
class Card
{	
	int cardNumber;
	std::string cardHolder;
	int pin;
public:
	int getPin();
	std::string getHolderName();
	int getCardNum();
	Card(int, int, std::string);
	Card();
	~Card();
};

