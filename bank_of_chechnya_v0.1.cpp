#include <iostream>

using namespace std;

void start() {
	cout << "\n";
	cout << "\nBank Of Chechnya 🏦" << "\n";
	cout << "---------------" << "\n";
	cout << "1. Проверить баланс" << "\n";
	cout << "2. Снять деньги" << "\n";
	cout << "3. Пополнить баланс" << "\n";
	cout << "4. Выйти" << "\n";
}

int main()
{
	int balance = 1000;
	int button;

	start();

	do {
		cout << "---------------" << "\n";
		cout << "Выберите действие: ";
		cin >> button;

		if (button == 1)
		{
			cout << "Ваш баланс: 💵" << balance << "$";
			start();
		}

		else if (button == 2)
		{

			if (balance > 0) {
				
				int take_money;
				cout << "Сколько хотите снять: ";
				cin >> take_money;

				if (take_money > balance) {
					cout << "🚫 Недостаточно средств.";
					start();
				}

				else if (take_money <= balance) {
					balance -= take_money;
					cout << "Вы успешно вывели 💵" << take_money << "$";
					start();
				}

			} else if (balance == 0) {
				cout << "Баланс равен " << balance << "$" << "\n";
				cout << "🚫 Недостаточно средств.";
				start();
			}

		}
		else if (button == 3) 
		{

			int give_money;
			cout << "Сколько вы хотите положить: ";
			cin >> give_money;

			if (give_money > 0 && give_money <= 999999) {
				balance += give_money;
				cout << "Вы пополнили баланс на 💵" << give_money << "$";
				start();
			}
			
			else if (give_money <= 0) {
				cout << "🚫 Вы ввели некорректное значение.";
				start();
			}
			
		}
	} while (!(button == 4));

	cout << "---------------" << "\n";
	cout << "До скорой встречи, создатель." << "\n";
}
