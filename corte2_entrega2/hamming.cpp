#include <iostream>
#include <string>
using namespace std;

int hamming_distance(string a, string b) {

    if (a.length() != b.length()) {
        throw invalid_argument("Las cadenas deben tener la misma longitud");
    }

    int distancia = 0;

    for (int i = 0; i < a.length(); i++) {
        if (a[i] != b[i]) {
            distancia++;
        }
    }

    return distancia;
}

int main() {

    string a, b;

    cout << "Cadena 1: ";
    cin >> a;

    cout << "Cadena 2: ";
    cin >> b;

    try {
        cout << "Distancia: " << hamming_distance(a,b) << endl;
    }
    catch (...) {
        cout << "Error: las cadenas deben tener igual tamaño\n";
    }

    return 0;
}