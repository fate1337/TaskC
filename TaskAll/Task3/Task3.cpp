#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");

	cout << "[1] ����\n[2] �����\n[3] ���������\n[4] ��������\n[5] ������� �� �������\n";
	float x, y;
	int i;
	cin >> i;
	if (i == 1) {
		cout << "������� ������ �����: ";
		cin >> x;
		cout << "������� ������ �����: ";
		cin >> y;
		cout << "[+] ���������: " << x + y;
	}
	else if (i == 2) {
		cout << "������� ������ �����: ";
		cin >> x;
		cout << "������� ������ �����: ";
		cin >> y;
		cout << "[+] ���������: " << x - y;
	}
	else if (i == 3) {
		cout << "������� ������ �����: ";
		cin >> x;
		cout << "������� ������ �����: ";
		cin >> y;
		if (y == 0) {
			cout << "������ �� 0 ������.";
			return 0;
		}
		cout << "[+] ���������: " << x / y;
	}
	else if (i == 4) {
		cout << "������� ������ �����: ";
		cin >> x;
		cout << "������� ������ �����: ";
		cin >> y;
		cout << "[+] ���������: " << x * y;
	}
	else if (i == 5) {
		int p, p1;
		cout << "������� ������ �����: ";
		cin >> p;
		cout << "������� ������ �����: ";
		cin >> p1;
		cout << "[+] ���������: " << p % p1;
	}
	else {
		cout << "������ ����� ���.";
	}

	return 0;
}
