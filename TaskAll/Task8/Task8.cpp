#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	setlocale(0, "");
	cout << "[+] ��������� - \"�������������� ������\"\n\n[1] �����\n[2] �������\n\n[+] �������� ������: ";
	int x;
	cin >> x;
	system("cls");
	switch (x) {
	case 1: {
		cout << "[+] ������: \"�����\"\n\n[1] ��������������\n[2] ������������\n\n[+] ����: ";
		cin >> x;
		system("cls");
		switch (x) {
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
		break;
	}
	case 2: {
		cout << "[+] ������: \"�������\"\n\n[1] �����������\n[2] ������\n\n[+] �������� ���: ";
		cin >> x;
		system("cls");
		switch (x) {
		case 1: {
			cout << "[+] ������: ";
			cin >> x;
			cout << "[+] ��������: ";
			char y;
			cin >> y;
			system("cls");
			cout << "[+] ���������:\n";
			for (int i = 0; i < x; i++) {
				for (int i2 = 0; i2 < x * 2 - 2; i2++)
					cout << y;
				cout << endl;
			}
			break;
		}
		case 2: {
			cout << "[+] ������: ";
			cin >> x;
			cout << "[+] ��������: ";
			char y;
			cin >> y;
			system("cls");
			cout << "[+] ���������:\n";
			for (int i = 0; i < x; i++) {
				for (int i2 = 0; i2 < x * 2 - 2; i2++)
					if (i == 0 || i == x - 1 || i2 == 0 || i2 == x * 2 - 3) {
						cout << y;
					}
					else {
						cout << " ";
					}
				cout << endl;
			}
			break;
		}
		default: {
			cout << "[-] ����� ������ ���.";
		}
		}
		break;
	}
	default: {
		system("cls");
		cout << "[-] ����� ������ ���.";
		break;
	}
	}
	return 0;
}
