class Twitter {
public:
    int timer = 0;

    // first -> tweets {time, tweetId}
    // second -> followees
    unordered_map<int, pair<vector<pair<int,int>>, vector<int>>> m;

    Twitter() {
    }

    void postTweet(int userId, int tweetId) {
        m[userId].first.push_back({timer++, tweetId});
    }

    vector<int> getNewsFeed(int userId) {

        priority_queue<pair<int,int>> pq;

        // Push user's tweets
        for (auto tweet : m[userId].first) {
            pq.push(tweet);
        }

        // Push followees' tweets
        for (int followee : m[userId].second) {
            for (auto tweet : m[followee].first) {
                pq.push(tweet);
            }
        }

        vector<int> ans;

        while (!pq.empty() && ans.size() < 10) {
            ans.push_back(pq.top().second); // tweetId
            pq.pop();
        }

        return ans;
    }

    void follow(int followerId, int followeeId) {

        if (followerId == followeeId)
            return;

        auto &v = m[followerId].second;

        if (find(v.begin(), v.end(), followeeId) == v.end()) {
            v.push_back(followeeId);
        }
    }

    void unfollow(int followerId, int followeeId) {

        auto &v = m[followerId].second;

        auto it = find(v.begin(), v.end(), followeeId);

        if (it != v.end()) {
            v.erase(it);
        }
    }
};