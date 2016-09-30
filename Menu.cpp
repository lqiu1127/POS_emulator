#include "Menu.h"

void Menu::processMenuOption(int menuOption, double salesTotal)
{	
	if (!isProcessed) {
			this->saleTotal = salesTotal;
		}
	if (menuOption >= 0 && menuOption <= 4) {
		
		if (menuOption == 0) {
		}
		else if (menuOption == 1) {
			int specialAmount;
			CashAdvance cashAdvance = CashAdvance();
			cashAdvance.setAmount(salesTotal);
			std::cout << "How much is the " << cashAdvance.toString() << ": ";
			std::cin >> specialAmount;
			cashAdvance.setSpecialAmount(specialAmount);
			this->saleTotal += cashAdvance.processTransaction(this->saleTotal);
		}
		else if (menuOption == 2) {
			int specialAmount;
			CashBack cashBack = CashBack();
			cashBack.setAmount(salesTotal);
			std::cout << "How much is the " << cashBack.toString() << ": ";
			std::cin >> specialAmount;
			cashBack.setSpecialAmount(specialAmount);
			this->saleTotal += cashBack.processTransaction(this->saleTotal);
		}
		else if (menuOption == 3) {
			int specialAmount; 
			Refund refund = Refund();
			refund.setAmount(salesTotal);
			std::cout << "How much is the " << refund.toString() << ": ";
			std::cin >> specialAmount;
			refund.setSpecialAmount(specialAmount);
			this->saleTotal += refund.processTransaction(this->saleTotal);
		}
		else if (menuOption == 4) {
			int specialAmount;
			Gratuity gratuity = Gratuity();
			gratuity.setAmount(salesTotal);
			std::cout << "How much is the " << gratuity.toString() << ": ";
			std::cin >> specialAmount;
			gratuity.setSpecialAmount(specialAmount);
			this->saleTotal += gratuity.processTransaction(this->saleTotal);
		}
		isProcessed = true;
		//transactions.push_back();
		//transactions = { &saleTransaction, &cashAdvance, &cashBack, &refund, &gratuity };
		/*
		transactions = {&SaleTransaction(), &CashAdvance(), &CashBack(), &Refund(), &Gratuity() };
		int specialAmount;
		transactions[menuOption]->setAmount(salesTotal);
		std::cout << "How much is the " << transactions[menuOption]->toString() << ": ";
		std::cin >> specialAmount;
		transactions[menuOption]->setSpecialAmount(specialAmount);
		this->saleTotal += transactions[menuOption]->processTransaction(this->saleTotal);
		*/
	}
	else if (menuOption == PREAUTH) {
		authorizeCard();
	}
	else if (menuOption == COMPLETE) {
		completeSale();
	}
}

void Menu::printReceiptSummary()
{
	for (int i = 0; i < salesArray.size(); i++) {
		printer.printReceipts(salesArray[i]);
	}
}

Card Menu::authorizeCard()
{
	cards = { &Card(0, 0, "Ra Ra"), &Card(1, 1, "La La"), &Card(2, 2, "Oh La") };
	int cardNum, pin;
	std::cout << "Please enter your card number: ";
	std::cin >> cardNum;
	std::cout << "Now please enter your pin: ";
	std::cin >> pin;
	Card *saleCard = cards[cardNum];
	if (saleCard-> getPin() == pin) {
		isAuthorized = true;
		std::cout << "Successfully Authenticated." << std::endl;
	}
	else {
		std::cout << "Authentication Failed." << std::endl;
	}
	this->saleCard = *cards[cardNum];
	return *saleCard;
}

Sale Menu::completeSale()
{
	// if sale is authorized, complete sale; else authorized the card first
	while (!isAuthorized) {
		authorizeCard();
	}
	// after the sale is complete, the next transaction is not going to be automatically authorized
	isAuthorized = false;
	isProcessed = false;
	// complete sale by returning a Sale item made by the completion class
	Sale sold = complete.completeSale(saleTotal, this->saleCard);
	salesArray.push_back(sold);
	printer.printReceipts(sold);
	return sold;
}

Menu::Menu()
{
	transactions = { &saleTransaction, &cashAdvance, &cashBack, &refund };
	cards = { &Card(0, 0, "Person 1"), &Card(1, 1, "Person 2"), &Card(2, 2, "Person 3") };
}

Menu::~Menu()
{
}
