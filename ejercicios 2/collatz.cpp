#include <iostream>
#include <stdexcept>
using namespace std;

int steps(int n) {
    if (n <= 0) {
        throw domain_error("El numero debe ser positivo");
    }

    int contador = 0;

    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        contador++;
    }

    return contador;
}

int main() {
    int numero;

    cout << "Ingrese un numero positivo: ";
    cin >> numero;

    try {
        int resultado = steps(numero);
        cout << "Cantidad de pasos: " << resultado << endl;
    } 
    catch (exception& e) {
        cout << "Error: " << e.what() << endl;
        return 1;
    }

    return 0;
}