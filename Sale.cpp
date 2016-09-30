#include "Sale.h"



double Sale::getTotal()
{
	return total;
}

std::string Sale::toString()
{
	std::string completion = "";
	tm *ltm = localtime(&completionTime);
	int month = 1 + ltm->tm_mon;
	int day = ltm->tm_mday;
	int year =  1900 + ltm->tm_year;
	int hour =  1 + ltm->tm_hour;
	int min =  1 + ltm->tm_min;
	int sec = 1 + ltm->tm_sec;
	completion = std::to_string(month) + "/" + std::to_string(day) + "/" + std::to_string(year) + "\t" + 
		std::to_string(hour) + ":" + std::to_string(min) + ":" + std::to_string(sec);
	return completion;
}

std::string Sale::getDetails()
{
	std::string details = "";
	details = "Card number: " + std::to_string(salesCard.getCardNum());
	details += "\nCard holder: Person" + std::to_string(salesCard.getCardNum() + 1);
	return details;
}

Sale::Sale(double amount, Card card)
{
	total = amount;
	salesCard = card;
}


Sale::~Sale()
{
}
