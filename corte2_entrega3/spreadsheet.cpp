#include <iostream>
#include <map>
using namespace std;

class Spreadsheet {
private:
    map<string, int> data;

public:
    void setCell(string cell, int value) {
        data[cell] = value;
    }

    int getCell(string cell) {
        return data[cell];
    }
};

int main() {
    Spreadsheet s;
    s.setCell("A1", 10);
    s.setCell("B1", 20);

    cout << "A1: " << s.getCell("A1") << endl;
    cout << "B1: " << s.getCell("B1") << endl;

    return 0;
}