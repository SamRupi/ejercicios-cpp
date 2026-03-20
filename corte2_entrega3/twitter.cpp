#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
using namespace std;

class Twitter {
private:
    int time = 0;
    unordered_map<int, set<int>> follows;
    unordered_map<int, vector<pair<int,int>>> tweets;

public:
    Twitter() {}

    void postTweet(int userId, int tweetId) {
        tweets[userId].push_back({time++, tweetId});
    }

    vector<int> getNewsFeed(int userId) {
        vector<pair<int,int>> feed;

        for (auto& t : tweets[userId])
            feed.push_back(t);

        for (int f : follows[userId]) {
            for (auto& t : tweets[f])
                feed.push_back(t);
        }

        sort(feed.rbegin(), feed.rend());

        vector<int> res;
        for (int i = 0; i < feed.size() && i < 10; i++)
            res.push_back(feed[i].second);

        return res;
    }

    void follow(int followerId, int followeeId) {
        follows[followerId].insert(followeeId);
    }

    void unfollow(int followerId, int followeeId) {
        follows[followerId].erase(followeeId);
    }
};

int main() {
    Twitter t;
    t.postTweet(1, 5);
    vector<int> feed = t.getNewsFeed(1);

    for (int x : feed) cout << x << " ";
    return 0;
}