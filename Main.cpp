#include "Terminal.h"
#include <iostream>

using namespace std;

int main() {
	Terminal *term = &Terminal();
	Menu menu = Menu();
	double amount;
	int outerMenuOption, menuOption;
	while (term->getRollLength() > 0) {
		//process a transaction
		cout << "1. New Transaction" << endl;
		cout << "2. Symmary" << endl;
		cin >> outerMenuOption;
		if (outerMenuOption == 1) {
			cout << "Enter the sales amount: $";
			cin >> amount;
			do {
				term->displayMenu();
				cout << "0 to cancel transaction" << endl;
				cin >> menuOption;
				if (menuOption == 0) {
					break;
				}
				term->processMenuOption(menuOption - 1, amount);
			} while (menuOption != 7);
			cout << "\n\nNext transaction\n\n";
		} 
		else if (outerMenuOption == 2) {
			//print summary
			term->printReceiptSummary();
		}
	}

	return 0;
}