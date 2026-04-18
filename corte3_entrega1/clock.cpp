#include <iostream>
using namespace std;

class Clock {
private:
    int h, m;

public:
    Clock(int hour, int min) {
        h = hour;
        m = min;
    }

    void add(int min) {
        m += min;
        h += m / 60;
        m %= 60;
        h %= 24;
    }

    void show() {
        cout << (h < 10 ? "0" : "") << h << ":"
             << (m < 10 ? "0" : "") << m << endl;
    }
};

int main() {
    Clock c(10, 30);
    c.add(40);
    c.show();
    return 0;
}