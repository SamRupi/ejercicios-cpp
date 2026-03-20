#include <iostream>
using namespace std;

class Robot {
private:
    int x = 0, y = 0;
    char dir = 'N';

public:
    void move(char instruction) {
        if (instruction == 'R') {
            if (dir == 'N') dir = 'E';
            else if (dir == 'E') dir = 'S';
            else if (dir == 'S') dir = 'W';
            else dir = 'N';
        }
        else if (instruction == 'L') {
            if (dir == 'N') dir = 'W';
            else if (dir == 'W') dir = 'S';
            else if (dir == 'S') dir = 'E';
            else dir = 'N';
        }
        else if (instruction == 'A') {
            if (dir == 'N') y++;
            else if (dir == 'S') y--;
            else if (dir == 'E') x++;
            else x--;
        }
    }

    void print() {
        cout << "Posicion: (" << x << "," << y << ") Direccion: " << dir << endl;
    }
};

int main() {
    Robot r;
    string instrucciones = "RAALAL";

    for (char c : instrucciones)
        r.move(c);

    r.print();

    return 0;
}