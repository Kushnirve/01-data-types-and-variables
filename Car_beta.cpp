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
        cout << "\n����: ";
        cin >> new_color;
        color = new_color;
        cout << "������: ";
        cin >> new_model;
        model = new_model;
        cout << "�����: ";
        cin >> new_number;
        number = new_number;
    }

    void printCar() {
        cout << "����: " << color << "\n������: " << model << "\n�����: " << number << endl;
    }
};

void edit(Cars** x, int i) {
    string new_color, new_model, new_number;
    cout << "����: " << x[i]->color << "\n������: " << x[i]->model << "\n�����: " << x[i]->number << endl;
    cout << "\n����: ";
    cin >> new_color;
    x[i]->color = new_color;
    cout << "������: ";
    cin >> new_model;
    x[i]->model = new_model;
    cout << "�����: ";
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
    int counter = 0; // ������� ����������
    cin >> search;
    for (int i = 0; i < amount; i++) {
        strcpy_s(buf, x[i]->number.c_str());

        if (strstr(buf, search) != NULL) {
            print_car(x, i);
            counter++;
        }
    }
    cout << counter << " �������";
}

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    bool q = true;
    int menu, b_num, searching, amount = 10;
    
    Cars* lamborgini = new Cars;
    
    Cars* car = new Cars[amount];
    car[0] = { "������", "Lamborgini Urus", "5555" };
    car[1] = { "�������", "Ferrari La Ferrari", "����" };
    car[2] = { "�����", "Mini Cooper John Cooper Works", "������" };
    car[3] = { "����������", "Mclaren F1", "�������" };
    car[4] = { "������ �����������", "��� 2108", "" };
    car[5] = { "�����", "Toyota Supra ", "Doubleday" };
    car[6] = { "������", "Midsized SUV: Lexus RX", "������ �����" };
    car[7] = { "�����", "Porsche 944 Turbo S", "Charles Scribner's Sons" };
    car[8] = { "�������", "Aston Martin Lagonda", "�����" };
    car[9] = { "", "Lotus Esprit", "����" };

    while (q) {
        cout << "\n�������� ����\n1. ��������������\n2. ������ ������\n3. �������� ���\n4. ����� ������ �� ������\n5. ���������� ������\n6. �����\n";
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