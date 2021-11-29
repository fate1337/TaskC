#include <iostream>
#include <windows.h>
using namespace std;
#define clear system("cls")


void error() {
	clear;
	cout << "Ошибка!";
	Sleep(500);
}

int easy() {
	srand(time(NULL));
	clear;
	int otvet, trueotvet = 0;
	string arr[10][6];
	arr[0][0] = "Что из перечисленого фрукт?";

	arr[0][1] = "Колбаса";
	arr[0][2] = "Яблоко";
	arr[0][3] = "Кабачок";
	arr[0][4] = "Кулич";
	arr[0][5] = "Яблоко";

	arr[1][0] = "У какого животного четыре лапы?";

	arr[1][1] = "Собака";
	arr[1][2] = "Попугай";
	arr[1][3] = "Рыбка";
	arr[1][4] = "Краб";
	arr[1][5] = "Собака";

	arr[2][0] = "Сколько хромосом у человека";

	arr[2][1] = "2x23";
	arr[2][2] = "47";
	arr[2][3] = "23";
	arr[2][4] = "2x27";
	arr[2][5] = "2x23";

	arr[3][0] = "Коты - это..";

	arr[3][1] = "Твердый горючий материал";
	arr[3][2] = "Жидкость";
	arr[3][3] = "Стул для богатых";
	arr[3][4] = "Кофеварочная машинка";
	arr[3][5] = "Жидкость";

	arr[4][0] = "Воздух - это ...";

	arr[4][1] = "Огонь";
	arr[4][2] = "Вода";
	arr[4][3] = "Воздух";
	arr[4][4] = "Земля";
	arr[4][5] = "Воздух";

	arr[5][0] = "Спутник Земли";

	arr[5][1] = "Солнце";
	arr[5][2] = "Луна";
	arr[5][3] = "Юпитер";
	arr[5][4] = "Сатурн";
	arr[5][5] = "Луна";

	arr[6][0] = "Что нельзя делать при встречи SCP 173?";

	arr[6][1] = "Смотреть";
	arr[6][2] = "Моргать";
	arr[6][3] = "Дышать";
	arr[6][4] = "Стоять";
	arr[6][5] = "Моргать";

	arr[7][0] = "При встрече кабана стоит ...";

	arr[7][1] = "Умереть";
	arr[7][2] = "Спросить где водопой";
	arr[7][3] = "Притаиться";
	arr[7][4] = "Пристально на него смотреть";
	arr[7][5] = "Притаиться";

	arr[8][0] = "Кого поздравляли с днем рождения в Винни Пухе?";

	arr[8][1] = "Пяточка";
	arr[8][2] = "Пуха";
	arr[8][3] = "Иа";
	arr[8][4] = "Совы";
	arr[8][5] = "Иа";

	arr[9][0] = "Сколько ушей у человека";

	arr[9][1] = "Половина";
	arr[9][2] = "Одно";
	arr[9][3] = "Три";
	arr[9][4] = "Два";
	arr[9][5] = "Два";

	bool array[10] = { 0,0,0,0,0,0,0,0,0,0 };
	int question = 1;
	bool prov = true;
	string buf;
	int heal = 5;
	int help = 5;

	while (prov == true) {
		int randomazer = rand() % 10;
		if (array[randomazer] == false) {
			cout << "[" << question << "] " << arr[randomazer][0] << "\t\tЗдоровье: " << heal << "\t\tПравильные ответы: " << trueotvet << endl << endl;
			question++;
			int random;
			bool ar[4] = { false,false, false, false };
			for (int i2 = 1; i2 < 5; i2++) {
				while (true) {
					random = rand() % 4;
					if (ar[random] == false) {
						cout << "[" << random + 1 << "] " << arr[randomazer][random + 1];
						cout << endl;
						ar[random] = true;
						break;
					}
				}
			}
			cout << "\n[9] Подсказка\n\n";
			cout << endl;
			cin >> otvet;


			if (otvet == 9 && help != 0) {
				cout << arr[randomazer][5];
				cout << endl;
				cout << endl;
				cin >> otvet;
				help--;
			}
			else if (otvet == 9 && help == 0) {
				cout << "Подсказки закончились\n";
				cin >> otvet;
			}
			if (arr[randomazer][otvet] == arr[randomazer][5]) {
				trueotvet++;
				array[randomazer] = true;
			}
			else {
				heal--;
			}

			clear;
		}
		if (heal == 0 || question == 10) {
			prov = false;

		}
	}


	if (prov == false && trueotvet >= 5) {
		cout << "Победа!\n\n";
		system("pause");
	}
	else {
		cout << "Ура вы проиграли!\n\n";
		system("pause");
	}
	return 0;
}
int normal() {
	srand(time(NULL));
	clear;
	int otvet, trueotvet = 0;
	string arr[10][6];
	arr[0][0] = "Как астрономы называют спутник любой планеты?";

	arr[0][1] = "Комета";
	arr[0][2] = "Метеор";
	arr[0][3] = "Астероид";
	arr[0][4] = "Луна";
	arr[0][5] = "Луна";

	arr[1][0] = "Какой из этих цветов отсутствует на олимпийской эмблеме - пяти разноцветных переплетенных кольцах?";

	arr[1][1] = "Голубой";
	arr[1][2] = "Черный";
	arr[1][3] = "Зеленый";
	arr[1][4] = "Белый";
	arr[1][5] = "Белый";

	arr[2][0] = "Кто из этих французских просветителей приезжал в Россию по приглашению Екатерины II?";

	arr[2][1] = "Жан Жак Руссо";
	arr[2][2] = "Дени Дидро";
	arr[2][3] = "Вольтер";
	arr[2][4] = "Шарль Луи Монтескье";
	arr[2][5] = "Дени Дидро";

	arr[3][0] = "Какой город располагается в двух частях света?";

	arr[3][1] = "Стамбул";
	arr[3][2] = "Панама";
	arr[3][3] = "Сингапур";
	arr[3][4] = "Каир";
	arr[3][5] = "Стамбул";

	arr[4][0] = "Какой город Остап Бендер назвал хрустальной мечтой своего детства?";

	arr[4][1] = "Нью-Йорк";
	arr[4][2] = "Рио-де-Жанейро";
	arr[4][3] = "Стамбул";
	arr[4][4] = "Париж";
	arr[4][5] = "Рио-де-Жанейро";

	arr[5][0] = "Кто из римских поэтов был выслан из Рима?";

	arr[5][1] = "Гораций";
	arr[5][2] = "Катулл";
	arr[5][3] = "Овидий";
	arr[5][4] = "Вергилий";
	arr[5][5] = "Овидий";

	arr[6][0] = "Какое из этих произведений Пушкина не входит в \"Повести Белкина\"?";

	arr[6][1] = "Барышня-крестьянка";
	arr[6][2] = "Метель";
	arr[6][3] = "Гробовщик";
	arr[6][4] = "Криджали";
	arr[6][5] = "Криджали";

	arr[7][0] = "Кто сказал: \"И дым отечества нам сладок и приятен\"?";

	arr[7][1] = "Грибоедов";
	arr[7][2] = "Вяземский";
	arr[7][3] = "Пожарский";
	arr[7][4] = "Пушкин";
	arr[7][5] = "Грибоедов";

	arr[8][0] = "Из каких морских беспозвоночных чаще всего делают женские украшения?";

	arr[8][1] = "Губка";
	arr[8][2] = "Медуза";
	arr[8][3] = "Коралл";
	arr[8][4] = "Трепанг";
	arr[8][5] = "Коралл";

	arr[9][0] = "Что большинство людей предпочитают взамен журавлей в небе?";

	arr[9][1] = "Синицу в руке";
	arr[9][2] = "Ветер в голове";
	arr[9][3] = "Пыль в глазах";
	arr[9][4] = "Анну на шее";
	arr[9][5] = "Синицу в руке";

	bool array[10] = { 0,0,0,0,0,0,0,0,0,0 };
	int question = 1;
	bool prov = true;
	string buf;
	int heal = 3;
	int help = 3;

	while (prov == true) {
		int randomazer = rand() % 10;
		if (array[randomazer] == false) {
			cout << "[" << question << "] " << arr[randomazer][0] << "\t\tЗдоровье: " << heal << "\t\tПравильные ответы:" << trueotvet << endl << endl;
			question++;
			int random;
			bool ar[4] = { false,false, false, false };
			for (int i2 = 1; i2 < 5; i2++) {
				while (true) {
					random = rand() % 4;
					if (ar[random] == false) {
						cout << "[" << i2 << "] " << arr[randomazer][random + 1];
						cout << endl;
						ar[random] = true;
						break;
					}
				}
			}
			cout << "\n[9] Подсказка\n\n";
			cout << endl;
			cin >> otvet;


			if (otvet == 9 && help != 0) {
				cout << arr[randomazer][5];
				cout << endl;
				cout << endl;
				cin >> otvet;
				help--;
			}
			else if (otvet == 9 && help == 0) {
				cout << "Подсказки закончились\n";
				cin >> otvet;
			}
			if (arr[randomazer][otvet] == arr[randomazer][5]) {
				trueotvet++;
				array[randomazer] = true;
			}
			else {
				heal--;
			}

			clear;
		}
		if (heal == 0 || question == 10) {
			prov = false;

		}
	}

	if (prov == false && trueotvet >= 7) {
		cout << "Победа!\n\n";
		system("pause");
	}
	else {
		cout << "Ура вы проиграли!\n\n";
		system("pause");
	}
	return 0;
}
int hard() {
	srand(time(NULL));
	clear;
	int otvet, trueotvet = 0;
	string arr[10][6];
	arr[0][0] = "Какое из этих произведений написал не Артур Конан Дойль?";

	arr[0][1] = "Этюд в багровых тонах";
	arr[0][2] = "Желтое лицо";
	arr[0][3] = "Женщина в белом";
	arr[0][4] = "Голубой карбункул";
	arr[0][5] = "Женщина в белом";

	arr[1][0] = "В какой стране находится город Антверпен?";

	arr[1][1] = "Бельгия";
	arr[1][2] = "Франция";
	arr[1][3] = "Голландия";
	arr[1][4] = "Германия";
	arr[1][5] = "Бельгия";

	arr[2][0] = "Что такое шерл?";

	arr[2][1] = "Розовый топаз";
	arr[2][2] = "Оранжевый сапфир";
	arr[2][3] = "Черный турмалин";
	arr[2][4] = "Желтый бриллиант";
	arr[2][5] = "Черный турмалин";

	arr[3][0] = "Что в 1966 году открыли советские учёные в Антарктиде на глубине 3 километров?";

	arr[3][1] = "Пресное озеро";
	arr[3][2] = "Залежи урана";
	arr[3][3] = "Затонувший корабль";
	arr[3][4] = "Огромный метеорит";
	arr[3][5] = "Пресное озеро";

	arr[4][0] = "Как назывался первый российский музей?";

	arr[4][1] = "Собрание диковинок";
	arr[4][2] = "Палата";
	arr[4][3] = "Хранилище";
	arr[4][4] = "Кунсткамера";
	arr[4][5] = "Кунсткамера";

	arr[5][0] = "Какие цветы любил булгаковский Мастер?";

	arr[5][1] = "Незабудки";
	arr[5][2] = "Маргаритки";
	arr[5][3] = "Розы";
	arr[5][4] = "Сирень";
	arr[5][5] = "Розы";

	arr[6][0] = "Что создал выходец из России Давид Сарнов?";

	arr[6][1] = "MTV";
	arr[6][2] = "NBC";
	arr[6][3] = "CNN";
	arr[6][4] = "BBC";
	arr[6][5] = "NBC";

	arr[7][0] = "Какой из этих действующих вулканов - самый высокий?";

	arr[7][1] = "Котопахи";
	arr[7][2] = "Мауна-Лоа";
	arr[7][3] = "Попокатепетль";
	arr[7][4] = "Ключевская Сопка";
	arr[7][5] = "Котопахи";

	arr[8][0] = "Как называется 1/100 часть драхмы?";

	arr[8][1] = "Сантим";
	arr[8][2] = "Агора";
	arr[8][3] = "Обод";
	arr[8][4] = "Лепта";
	arr[8][5] = "Лепта";

	arr[9][0] = "Под каким именем Эрих Вейсс достиг всемирной славы?";

	arr[9][1] = "Макс Линдер";
	arr[9][2] = "Гарри Гудини";
	arr[9][3] = "Фред";
	arr[9][4] = "Тони Вейсмюллер";
	arr[9][5] = "Гарри Гудини";

	bool array[10] = { 0,0,0,0,0,0,0,0,0,0 };
	int question = 1;
	bool prov = true;
	string buf;
	int heal = 1;
	int help = 1;

	while (prov == true) {
		int randomazer = rand() % 10;
		if (array[randomazer] == false) {
			cout << "[" << question << "] " << arr[randomazer][0] << "\t\tЗдоровье: " << heal << "\t\tПравильные ответы: " << trueotvet << endl << endl;
			question++;
			int random;
			bool ar[4] = { false,false, false, false };
			for (int i2 = 1; i2 < 5; i2++) {
				while (true) {
					random = rand() % 4;
					if (ar[random] == false) {
						cout << "[" << i2 << "] " << arr[randomazer][random + 1];
						cout << endl;
						ar[random] = true;
						break;
					}
				}
			}
			cout << "\n[9] Подсказка\n\n";
			cout << endl;
			cin >> otvet;


			if (otvet == 9 && help != 0) {
				cout << arr[randomazer][5];
				cout << endl;
				cout << endl;
				cin >> otvet;
				help--;
			}
			else if (otvet == 9 && help == 0) {
				cout << "Подсказки закончились\n";
				cin >> otvet;
			}
			if (arr[randomazer][otvet] == arr[randomazer][5]) {
				trueotvet++;
				array[randomazer] = true;
			}
			else {
				heal--;
			}

			clear;
		}
		if (heal == 0 || question == 10) {
			prov = false;

		}
	}

	if (prov == false && trueotvet >= 9) {
		cout << "Победа!\n\n";
		system("pause");
	}
	else {
		cout << "Ура вы проиграли!\n\n";
		system("pause");
	}
	return 0;
}



int main() {
	setlocale(0, "");

	int menu, dif = 1;

	while (true) {
		clear;
		cout << "[1] Начать викторину\n"
			"[2] Настройки\n"
			"[3] Правила\n"
			"[4] Выход\n\n";

		cin >> menu;
		switch (menu) {

		case 1: {
			if (dif == 1) {
				easy();
			}
			else if (dif == 2) {
				normal();
			}
			else if (dif == 3) {
				hard();
			}
			break;
		}


		case 2: {
			clear;
			cout << "[+] Настройки\n\n"
				"[1] Легко\n"
				"[2] Нормально\n"
				"[3] Сложно\n\n";
			cin >> dif;
			break;
		}

		case 3: {
			clear;
			cout << "[+] Правила\n\n"
				"[-] Легко - пять подсказок и жизней\n"
				"[-] Нормально - три посказки и три жизни \n"
				"[-] Сложно - одна подсказка и жизнь\n\n"
				"Введите любое число для выхода...\n\n";
			int __; cin >> __;
			break;
		}

		case 4: {
			return 0;
			break;
		}
		default: {
			error();
		}
		}



	}




	int _; cin >> _;
	return 0;
}
