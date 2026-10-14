#include <bits/stdc++.h>
using namespace std;

class Twitter {
private:
    unordered_map<int, vector<pair<int, int>>> tweets;
    unordered_map<int, unordered_set<int>> following;
    int time;

public:
    Twitter() {
        time = 0;
    }

    void postTweet(int userId, int tweetId) {
        tweets[userId].push_back({time, tweetId});
        time++;
    }

    vector<int> getNewsFeed(int userId) {
        vector<pair<int, int>> allTweets;

        // User's own tweets
        if (tweets.count(userId)) {
            for (auto tweet : tweets[userId]) {
                allTweets.push_back(tweet);
            }
        }

        // Tweets from followed users
        if (following.count(userId)) {
            for (int followeeId : following[userId]) {
                if (tweets.count(followeeId)) {
                    for (auto tweet : tweets[followeeId]) {
                        allTweets.push_back(tweet);
                    }
                }
            }
        }

        // Newest tweets first
        sort(allTweets.begin(), allTweets.end(),
             [](const pair<int, int>& a, const pair<int, int>& b) {
                 return a.first > b.first;
             });

        vector<int> feed;

        for (int i = 0; i < min(10, (int)allTweets.size()); i++) {
            feed.push_back(allTweets[i].second);
        }

        return feed;
    }

    void follow(int followerId, int followeeId) {
        following[followerId].insert(followeeId);
    }

    void unfollow(int followerId, int followeeId) {
        if (following.count(followerId)) {
            following[followerId].erase(followeeId);
        }
    }
};

/*
Example:
Twitter twitter;

twitter.postTweet(1, 5);
twitter.getNewsFeed(1);  // Output: [5]

twitter.follow(1, 2);
twitter.postTweet(2, 6);
twitter.getNewsFeed(1);  // Output: [6, 5]

twitter.unfollow(1, 2);
twitter.getNewsFeed(1);  // Output: [5]

Note: The user's own tweets are always included in their news feed.
*/