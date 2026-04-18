#include <iostream>
#include <unordered_map>
using namespace std;

class UndergroundSystem {
private:
    unordered_map<int, pair<string, int>> checkInData;
    unordered_map<string, pair<int, int>> travelData;

public:
    void checkIn(int id, string stationName, int t) {
        checkInData[id] = {stationName, t};
    }

    void checkOut(int id, string stationName, int t) {
        auto data = checkInData[id];
        string route = data.first + "-" + stationName;
        int time = t - data.second;

        travelData[route].first += time;
        travelData[route].second += 1;
    }

    double getAverageTime(string start, string end) {
        string route = start + "-" + end;
        return (double)travelData[route].first / travelData[route].second;
    }
};

int main() {
    UndergroundSystem u;

    u.checkIn(1, "A", 3);
    u.checkOut(1, "B", 8);

    cout << u.getAverageTime("A", "B") << endl;

    return 0;
}