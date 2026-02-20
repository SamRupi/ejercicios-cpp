#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double P, r, A;
    int n, t;

    cout << "Ingrese el capital inicial: ";
    cin >> P;

    cout << "Ingrese la tasa de interes anual (ej: 0.05 para 5%): ";
    cin >> r;

    cout << "Ingrese numero de veces que se aplica interes al año: ";
    cin >> n;

    cout << "Ingrese numero de años: ";
    cin >> t;

    A = P * pow((1 + r/n), n*t);

    cout << "El monto final es: " << A << endl;

    return 0;
}
