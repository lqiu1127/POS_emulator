#include "Terminal.h"



int Terminal::getRollLength()
{
	return receiptRollLength;
}

void Terminal::printReceipt()
{
}

void Terminal::processMenuOption(int menuOption, double amount)
{
	menu.processMenuOption(menuOption, amount);
}

void Terminal::printReceiptSummary()
{
	menu.printReceiptSummary();
}

void Terminal::displayMenu()
{
	display.displayMenu();
}

Terminal::Terminal()
{

}


Terminal::~Terminal()
{
}
