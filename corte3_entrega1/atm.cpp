#include <iostream>
#include <vector>
using namespace std;

class ATM {
private:
    vector<long long> money = {0,0,0,0,0};
    vector<int> values = {20,50,100,200,500};

public:
    void deposit(vector<int> banknotesCount) {
        for(int i = 0; i < 5; i++)
            money[i] += banknotesCount[i];
    }

    vector<int> withdraw(int amount) {
        vector<int> res(5,0);

        for(int i = 4; i >= 0; i--) {
            int take = min((long long)(amount / values[i]), money[i]);
            res[i] = take;
            amount -= take * values[i];
        }

        if(amount != 0) return {-1};

        for(int i = 0; i < 5; i++)
            money[i] -= res[i];

        return res;
    }
};

int main() {
    ATM atm;
    atm.deposit({0,0,1,2,1});

    vector<int> r = atm.withdraw(600);

    for(int x : r) cout << x << " ";

    return 0;
}