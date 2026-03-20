#include <iostream>
using namespace std;

bool can_attack(int x1, int y1, int x2, int y2) {
    if (x1 == x2) return true;
    if (y1 == y2) return true;
    if (abs(x1 - x2) == abs(y1 - y2)) return true;
    return false;
}

int main() {
    int x1 = 2, y1 = 3;
    int x2 = 5, y2 = 6;

    if (can_attack(x1, y1, x2, y2))
        cout << "Las reinas pueden atacarse\n";
    else
        cout << "No pueden atacarse\n";

    return 0;
}