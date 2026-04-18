#include <iostream>
#include <map>
using namespace std;

class Auction {
private:
    map<string, int> bids;

public:
    void placeBid(string user, int amount) {
        bids[user] = amount;
    }

    void winner() {
        string bestUser = "";
        int maxBid = 0;

        for(auto& b : bids) {
            if(b.second > maxBid) {
                maxBid = b.second;
                bestUser = b.first;
            }
        }

        cout << "Ganador: " << bestUser << " con " << maxBid << endl;
    }
};

int main() {
    Auction a;

    a.placeBid("Juan", 100);
    a.placeBid("Ana", 200);

    a.winner();

    return 0;
}