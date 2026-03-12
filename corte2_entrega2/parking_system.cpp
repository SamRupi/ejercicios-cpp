#include <iostream>
using namespace std;

class ParkingSystem {
private:
    int big;
    int medium;
    int small;

public:
    ParkingSystem(int big, int medium, int small) {
        this->big = big;
        this->medium = medium;
        this->small = small;
    }

    bool addCar(int carType) {
        if (carType == 1) {
            if (big > 0) {
                big--;
                return true;
            }
        }
        else if (carType == 2) {
            if (medium > 0) {
                medium--;
                return true;
            }
        }
        else if (carType == 3) {
            if (small > 0) {
                small--;
                return true;
            }
        }
        return false;
    }
};

int main() {
    ParkingSystem parking(1, 1, 0);

    cout << parking.addCar(1) << endl;
    cout << parking.addCar(2) << endl;
    cout << parking.addCar(3) << endl;

    return 0;
}