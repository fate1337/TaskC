#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	cout << "[-] ��������� - �������������� ������\n\n[--] �����\n\n";
	cout << "[-] ������: \"�����\"\n\n[1] ��������������\n[2] ������������\n\n[+] ����: ";
	int i;
	cin >> i;
	system("cls");
	switch (i) {
		case 1: {
			int weight;
			char y;
			cout << "[+] ����� �����: ";
			cin >> weight;
			cout << "[+] ��������: ";
			cin >> y;
			system("cls");
			cout << "[-] ���������:\n";
			while (weight > 0) {
				cout << y;
				weight--;
			}
			break;
		}
		case 2: {
			int weight;
			char y;
			cout << "[+] ����� �����: ";
			cin >> weight;
			cout << "[+] ��������: ";
			cin >> y;
			system("cls");
			cout << "[-] ���������:\n";
			while (weight > 0) {
				cout << y << endl;
				weight--;
			}
			break;
		}
		default: {
			cout << "[-] ����� ������ ���.";
			break;
		}
		}
	return 0;
}
