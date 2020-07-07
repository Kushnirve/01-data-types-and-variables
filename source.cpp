// Homework 1.1
#include<iostream>
using namespace std;

int main()
{
	float price_copybook;
	int qnt_copybook;
	float price_pencil;
	int qnt_pencil;
	float total;
	setlocale(0, "rus");
	cout << "Вычисление стоимости покупки.\n";
	cout << "Введите исходные данные:\n";
	cout << "Цена тетради (грн.) -> ";
	cin >> price_copybook;
	cout << "Количество тетрадей -> ";
	cin >> qnt_copybook;
	cout << "Цена карандаша (грн.) -> ";
	cin >> price_pencil;
	cout << "Количество карандашей -> ";
	cin >> qnt_pencil;
	total = price_copybook * qnt_copybook + price_pencil * qnt_pencil;
	cout << "Стоимость покупки: " << total << " грн.";
}

// Homework 1.2
#include<iostream>
using namespace std;

int main()
{
	float price_copybook;
	float price_cover;
	int qnt_set;
	float total;
	setlocale(0, "rus");
	cout << "Вычисление стоимости покупки.\n";
	cout << "Введите исходные данные:\n";
	cout << "Цена тетради (грн.) -> ";
	cin >> price_copybook;
	cout << "Цена обложки (грн.) -> ";
	cin >> price_cover;
	cout << "Количество комплектов (шт.) -> ";
	cin >> qnt_set;
	total = qnt_set * (price_copybook + price_cover);
	cout << "Стоимость покупки: " << total << " грн.";
}

// Homework 1.3
#include<iostream>
using namespace std;

int main()
{
	float village_distanse, benz_span;
	float benz_price;
	float total;
	setlocale(0, "rus");
	cout << "Вычисление стоимости поездки на дачу и обратно.\nВведите исходные данные:\nРасстояние до дачи (км) -> ";
	cin >> village_distanse;
	cout << "Расход бензина (литров на 100 км пробега) -> ";
	cin >> benz_span;
	cout << "Цена литра бензина (грн.) -> ";
	cin >> benz_price;
	total = benz_span * benz_price / 100 * village_distanse;
	cout << "Поездка на дачу и обратно обойдется в " << total << " грн.";
}
