#pragma once
#pragma warning( disable : 4996 )
#include <ctime>
#include <string>
#include "Card.h"
#include "Payment.h"
class Sale
{
	Payment payment = Payment();
	double total;
	time_t completionTime = time(0);
	Card salesCard;
public:
	double getTotal(); 
	std::string toString();
	std::string getDetails();
	Sale(double, Card);
	~Sale();
};

