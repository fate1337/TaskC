#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	cout << "[-] Программа - Геометрические фигуры\n\n[--] Линия\n\n";
	cout << "[-] Фигура: \"Линия\"\n\n[1] Горизонтальная\n[2] Вертикальная\n\n[+] Ввод: ";
	int i;
	cin >> i;
	system("cls");
	switch (i) {
		case 1: {
			int weight;
			char y;
			cout << "[+] Длина линии: ";
			cin >> weight;
			cout << "[+] Текстура: ";
			cin >> y;
			system("cls");
			cout << "[-] Результат:\n";
			while (weight > 0) {
				cout << y;
				weight--;
			}
			break;
		}
		case 2: {
			int weight;
			char y;
			cout << "[+] Длина линии: ";
			cin >> weight;
			cout << "[+] Текстура: ";
			cin >> y;
			system("cls");
			cout << "[-] Результат:\n";
			while (weight > 0) {
				cout << y << endl;
				weight--;
			}
			break;
		}
		default: {
			cout << "[-] Такой фигуры нет.";
			break;
		}
		}
	return 0;
}
