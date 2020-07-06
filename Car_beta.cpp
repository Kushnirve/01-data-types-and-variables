#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

struct Cars {
    string color;
    string model;
    string number;

    void newCar() {
        string new_color, new_model, new_number;
        cout << "\nЦвет: ";
        cin >> new_color;
        color = new_color;
        cout << "Модель: ";
        cin >> new_model;
        model = new_model;
        cout << "Номер: ";
        cin >> new_number;
        number = new_number;
    }

    void printCar() {
        cout << "Цвет: " << color << "\nМодель: " << model << "\nНомер: " << number << endl;
    }
};

void edit(Cars** x, int i) {
    string new_color, new_model, new_number;
    cout << "Цвет: " << x[i]->color << "\nМодель: " << x[i]->model << "\nНомер: " << x[i]->number << endl;
    cout << "\nЦвет: ";
    cin >> new_color;
    x[i]->color = new_color;
    cout << "Модель: ";
    cin >> new_model;
    x[i]->model = new_model;
    cout << "Номер: ";
    cin >> new_number;
    x[i]->number = new_number;
}

void print_car(Cars** x, int i) {
    cout << x[i]->color << " : " << x[i]->model << " : " << x[i]->number << endl;
}

void print_all(Cars** x, int amount) {
    for (int i = 0; i < amount; i++) print_car(x, i);
}


void search(Cars** x, int amount) {
    char search[50];
    char buf[255];
    int counter = 0; // счетчик совпадений
    cin >> search;
    for (int i = 0; i < amount; i++) {
        strcpy_s(buf, x[i]->number.c_str());

        if (strstr(buf, search) != NULL) {
            print_car(x, i);
            counter++;
        }
    }
    cout << counter << " найдено";
}

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    bool q = true;
    int menu, b_num, searching, amount = 10;
    
    Cars* lamborgini = new Cars;
    
    Cars* car = new Cars[amount];
    car[0] = { "Черный", "Lamborgini Urus", "5555" };
    car[1] = { "Красный", "Ferrari La Ferrari", "Галя" };
    car[2] = { "Белый", "Mini Cooper John Cooper Works", "угодил" };
    car[3] = { "Серебряный", "Mclaren F1", "Веселка" };
    car[4] = { "Брызги шампанского", "ВАЗ 2108", "" };
    car[5] = { "Синий", "Toyota Supra ", "Doubleday" };
    car[6] = { "Желтый", "Midsized SUV: Lexus RX", "Фантом Пресс" };
    car[7] = { "Белый", "Porsche 944 Turbo S", "Charles Scribner's Sons" };
    car[8] = { "Металик", "Aston Martin Lagonda", "Крест" };
    car[9] = { "", "Lotus Esprit", "Форс" };

    while (q) {
        cout << "\nАвтобаза Меню\n1. Редактирование\n2. Печать машины\n3. Показать все\n4. Поиск машины по номеру\n5. Заполнение машины\n6. Выход\n";
        cin >> menu;
        switch (menu) {
        case 1:
            lamborgini->newCar();
            break;
        case 2:
            lamborgini->printCar();
            break;
        case 3:

            break;
        case 4:
   
            break;
        case 6:
            q = false;
        }
    }
}