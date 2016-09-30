#pragma once
#include <vector>
#include "Card.h"
#include "Display.h"
#include "Menu.h"
#include "Keyboard.h"
#include "Printer.h"
#include <vector>
class Terminal
{
	friend class Menu;
	Menu menu = Menu();
	Display display = Display();
	Keyboard keyBoard = Keyboard();
	int receiptRollLength = 10000; // its over 9000 O.o
public:
	int getRollLength();
	void printReceipt();
	void processMenuOption(int, double);
	void printReceiptSummary();
	void displayMenu();
	Terminal();
	~Terminal();
};

