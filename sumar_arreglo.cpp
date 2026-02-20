#include <iostream>
using namespace std;

int main() {
    int arreglo[5] = {1, 2, 3, 4, 5};
    int suma = 0;

    for(int i = 0; i < 5; i++) {
        suma += arreglo[i];
    }

    cout << "La suma es: " << suma << endl;

    return 0;
}
