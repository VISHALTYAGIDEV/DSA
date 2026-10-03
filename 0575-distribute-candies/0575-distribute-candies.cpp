class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        unordered_set<int> unique(candies.begin(), candies.end());

        return min((int)unique.size(), (int)candies.size() / 2);
    }
};