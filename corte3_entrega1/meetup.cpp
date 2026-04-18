#include <iostream>
using namespace std;

// 0=domingo, 1=lunes, ..., 6=sabado
int day_of_week(int d, int m, int y) {
    if (m < 3) {
        m += 12;
        y--;
    }
    int k = y % 100;
    int j = y / 100;

    int h = (d + (13*(m+1))/5 + k + k/4 + j/4 + 5*j) % 7;

    return (h + 6) % 7;
}

int main() {
    int year = 2024;
    int month = 3; // marzo
    int target_day = 1; // lunes

    cout << "Buscando el primer lunes de marzo 2024...\n";

    for (int day = 1; day <= 31; day++) {
        if (day_of_week(day, month, year) == target_day) {
            cout << "Fecha encontrada: " << day << "/3/2024\n";
            break;
        }
    }

    return 0;
}