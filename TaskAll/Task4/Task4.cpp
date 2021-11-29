#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");

	cout << "[+] Месяца года\n[1] Январь\n[2] Февраль\n[3] Март\n[4] Апрель\n[5] Май\n[6] Июнь\n[7] Июль\n[8] Август\n[9] Сентябрь\n[10] Oктрябрь\n[11] Ноябрь\n[12] Декабрь\n\n[+] Выберите месяц: ";
	int i;
	cin >> i;
	switch (i) {
	case 1: {
		cout << "[=] Это Январь";
		break; }
	case 2: {
		cout << "[=] Это Февраль";
		break; }
	case 3: {
		cout << "[=] Это Март";
		break; }
	case 4: {
		cout << "[=] Это Апрель";
		break; }
	case 5: {
		cout << "[=] Это Май";
		break; }
	case 6: {
		cout << "[=] Это Июнь";
		break; }
	case 7: {
		cout << "[=] Это Июль";
		break; }
	case 8: {
		cout << "[=] Это Август";
		break; }
	case 9: {
		cout << "[=] Это Сентябрь";
		break; }
	case 10: {
		cout << "[=] Это Октябрь";
		break; }
	case 11: {
		cout << "[=] Это Ноябрь";
		break; }
	case 12: {
		cout << "[=] Это Декабрь";
		break; }
	default: {
		cout << "[] Такого месяца нет!"; }
	}

	return 0;
}
