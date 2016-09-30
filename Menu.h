#pragma once
#include "CashAdvance.h"
#include "CashBack.h"
#include "Completion.h"
#include "Refund.h"
#include "SaleTransaction.h"
#include "PreAuth.h"
#include "Transactions.h"
#include "Gratuity.h"
#include "Sale.h"
#include "Card.h"
#include "Printer.h"
#include <vector>
#include <iostream>

class Menu
{
	enum transactionNums : int { SALES, ADVANCE, BACK, REFUND, GRATUITY, PREAUTH, COMPLETE };
	CashAdvance cashAdvance = CashAdvance();
	CashBack cashBack = CashBack();
	Refund refund = Refund();
	Gratuity gratuity = Gratuity();
	SaleTransaction saleTransaction = SaleTransaction();
	Completion complete = Completion();
	PreAuth preAuth = PreAuth();
	std::vector<Transactions*> transactions = {&saleTransaction, &cashAdvance, &cashBack, &refund};
	double saleTotal;
	Card saleCard;
	bool isAuthorized = false, isProcessed = false;
	std::vector <Card*> cards = { &Card(0, 0, "Person 1"), &Card(1, 1, "Person 2"), &Card(2, 2, "Person 3") };
	std::vector<Sale> salesArray = {};
	Printer printer = Printer();
public:
	void processMenuOption(int, double);
	void printReceiptSummary();
	Card authorizeCard();
	Sale completeSale();
	Menu();
	~Menu();
};

