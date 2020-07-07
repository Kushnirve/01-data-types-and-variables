#include<iostream>
using namespace std;

int main() {
	setlocale(0, "rus");

	//1.1
	float price_copybook, price_pencil, total;
	int qnt_copybook, qnt_pencil;
	cout << "Вычисление стоимости покупки.\nВведите исходные данные:\nЦена тетради (грн.) -> ";
	cin >> price_copybook;
	cout << "Количество тетрадей -> ";
	cin >> qnt_copybook;
	cout << "Цена карандаша (грн.) -> ";
	cin >> price_pencil;
	cout << "Количество карандашей -> ";
	cin >> qnt_pencil;
	total = price_copybook * qnt_copybook + price_pencil * qnt_pencil;
	cout << "Стоимость покупки: " << total << " грн.";

	//1.2
	float price_copybook, price_cover, total;
	int qnt_set;
	cout << "Вычисление стоимости покупки.\nВведите исходные данные:\nЦена тетради (грн.) -> ";
	cin >> price_copybook;
	cout << "Цена обложки (грн.) -> ";
	cin >> price_cover;
	cout << "Количество комплектов (шт.) -> ";
	cin >> qnt_set;
	total = qnt_set * (price_copybook + price_cover);
	cout << "Стоимость покупки: " << total << " грн.";

	//1.3
	float village_distanse, gas_spend, gas_price, total;
	cout << "Вычисление стоимости поездки на дачу и обратно.\nВведите исходные данные:\nРасстояние до дачи (км) -> ";
	cin >> village_distanse;
	cout << "Расход бензина (литров на 100 км пробега) -> ";
	cin >> gas_spend;
	cout << "Цена литра бензина (грн.) -> ";
	cin >> gas_price;
	total = gas_spend * gas_price / 100 * village_distanse * 2;
	cout << "Поездка на дачу и обратно обойдется в " << total << " грн.";
}