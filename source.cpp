#include <iostream>
using namespace std;

void menu() {
	cout << "\n/******************MENU*******************/\n\n";
	cout << "1. BALANCE\n";
	cout << "2. WITHDRAW\n";
	cout << "3. DEPOSIT\n";
	cout << "4. EXIT\n";
	cout << "\n/*****************************************/\n\n";
}

int main() {
	int pin,option;
	double amount, deposit,withdrawal;
	amount = 10000;
	cout << "Welcome to C++ Automatted Teller Machine\n";
	cout << "Enter PIN (PIN IS STORED IN THE SOURCE CODE ) \n";
	cin >> pin;
	if (pin == 27685) {
		cout << "Correct Pin";
		do
		{

			menu();
			cout << "choose an option : ";
			cin >> option;
			system("cls"); // clears Everything after option
			switch (option)
			{
			case 1: cout << "The balance is R" << amount << endl;
				break;
			case 2: cout << "How much do you want to Withdraw: R";
				cin >> withdrawal;
				if (withdrawal <= 5000 && withdrawal >= 100) {
					cout << "Amount withdrawn is R" << withdrawal << endl;
					amount -= withdrawal;
					cout << "Your amount is R" << amount << endl;
				}
				else {
					cout << "Amount that can be withdrawn is R100 - R5000";
				}

				break;
			case 3: cout << "How much do you want to Deposit: R";
				cin >> deposit;
				cout << "Amount deposited is R" << deposit << endl;
				amount += deposit;
				cout << "Your amount is R" << amount << endl;
				break;
			}

		} while (option != 4); 
		if (option == 4) { cout << "Thanks for banking with us"; }
	}
	else {
		cout << "Incorrect PIN! \nPlease Exit the application...";
	}

	system("pause>0");
	return 0;
}
