#include <iostream>
#include <cmath>
#include <locale>
#include <stdlib.h>
//Лабараторная работа номер 9.
//Вариант 21, задание номер 1.
//Объект –квартира. Известны адрес, количество комнат,
//жилая площадь, общая площадь,площадь кухни, наличие балкона или лоджии,
//этаж. Выдать список однокомнатных квартир, у которых есть лоджия
using namespace std;
const int max_kol = 1000;
struct Apartment {
	int komnata;
	string address;
	float livingArea;
	float totalArea;
	float kitchenArea;
	int hasLodg = 1;
};
int main()
{
	int y = 0;
	setlocale(LC_ALL, "ru");
	system("chcp 1251");//установить кодовую страницу, соответ. Win-кодировке 
	Apartment arrApartment[max_kol];// массив адресов
	int kol;
	cout << "Введите количество квартир" << " ";
	cin >> kol;
	cout << endl;

	cout << "Введите характеристики квартиры";
	cout << endl;
	//считываем характеристики квартир
	for (int i = 0; i < kol; i++) {

		cout << endl;

		cout << "Адресс :" << " ";
		cin >> arrApartment[i].address;

		cout << "Кол-во комнат :" << " ";
		cin >> arrApartment[i].komnata;

		cout << "Жилая площадь :" << " ";
		cin >> arrApartment[i].livingArea;

		cout << "Общая площадь :" << " ";
		cin >> arrApartment[i].totalArea;

		cout << "Площадь кухни :" << " ";
		cin >> arrApartment[i].kitchenArea;

		cout << "Кол-во балконов и лоджий :" << " ";
		cin >> arrApartment[i].hasLodg;
		cout << endl;
	}
	cout << endl;
	cout << "Подходящие варианты : " <<endl;
	for (int i = 0; i < kol; i++)
	{
		if (arrApartment[i].komnata == 1)
			if (arrApartment[i].hasLodg > 0) {
				{
					cout << endl;


					cout << "Адресс :" << arrApartment[i].address << endl;
					cout << "Кол-во комнат :" << arrApartment[i].komnata << endl;
					cout << "Жилая площадь :" << arrApartment[i].livingArea << endl;
					cout << "Общая площадь :" << arrApartment[i].totalArea << endl;
					cout << "Площадь кухни :" << arrApartment[i].kitchenArea << endl;
					cout << "Наличие балкона или лоджии :" << arrApartment[i].hasLodg << endl;
					y++;

				}
			}



	}
	

}
