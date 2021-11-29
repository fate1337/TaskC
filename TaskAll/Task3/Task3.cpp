#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");

	cout << "[1] Плюс\n[2] Минус\n[3] Разделить\n[4] Умножить\n[5] Остаток от деления\n";
	float x, y;
	int i;
	cin >> i;
	if (i == 1) {
		cout << "Введите первое число: ";
		cin >> x;
		cout << "Введите второе число: ";
		cin >> y;
		cout << "[+] Результат: " << x + y;
	}
	else if (i == 2) {
		cout << "Введите первое число: ";
		cin >> x;
		cout << "Введите второе число: ";
		cin >> y;
		cout << "[+] Результат: " << x - y;
	}
	else if (i == 3) {
		cout << "Введите первое число: ";
		cin >> x;
		cout << "Введите второе число: ";
		cin >> y;
		if (y == 0) {
			cout << "Делить на 0 нельзя.";
			return 0;
		}
		cout << "[+] Результат: " << x / y;
	}
	else if (i == 4) {
		cout << "Введите первое число: ";
		cin >> x;
		cout << "Введите второе число: ";
		cin >> y;
		cout << "[+] Результат: " << x * y;
	}
	else if (i == 5) {
		int p, p1;
		cout << "Введите первое число: ";
		cin >> p;
		cout << "Введите второе число: ";
		cin >> p1;
		cout << "[+] Результат: " << p % p1;
	}
	else {
		cout << "Такого знака нет.";
	}

	return 0;
}
