#include <iostream>
using namespace std;

double age_on_earth(double seconds) {
    return seconds / 31557600;
}

int main() {

    double seconds;

    cout << "Ingrese los segundos: ";
    cin >> seconds;

    double earth_age = age_on_earth(seconds);

    cout << "Edad en la Tierra: " << earth_age << endl;
    cout << "Edad en Mercurio: " << earth_age / 0.2408467 << endl;
    cout << "Edad en Venus: " << earth_age / 0.61519726 << endl;
    cout << "Edad en Marte: " << earth_age / 1.8808158 << endl;

    return 0;
}