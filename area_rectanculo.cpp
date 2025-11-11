//
// Created by Iván Santiago Díaz Vázquez on 10/11/25.
//
#include <iostream>
using namespace std;

int main() {
    float area, base, altura;

    cout << "Ingrese la base del rectánculo: ";
    cin >> base;

    cout << "Ingrese la altura del rectángulo: ";
    cin >> altura;

    area = base * altura;

    cout << "El área del rectángulo es: " << area << endl;

    return 0;
}