#include "Printer.h"


void Printer::printReceipts(Sale sale)
{
	std::cout << "\nSales Receipt: \n";
	std::cout << sale.toString() << std::endl;
	std::cout << "Amount: $" << sale.getTotal() << std::endl;
	std::cout << sale.getDetails() << std::endl;
}

Printer::Printer()
{
}


Printer::~Printer()
{
}
