#include <iostream>
#include <cmath>
using namespace std;

bool is_armstrong_number(int number) {

    int original = number;
    int suma = 0;
    int digits = 0;

    int temp = number;

    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = number;

    while (temp > 0) {
        int digit = temp % 10;
        suma += pow(digit, digits);
        temp /= 10;
    }

    return suma == original;
}

int main() {

    int num;

    cout << "Ingrese un numero: ";
    cin >> num;

    if (is_armstrong_number(num))
        cout << "Es un numero Armstrong\n";
    else
        cout << "No es un numero Armstrong\n";

    return 0;
}