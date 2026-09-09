class Solution {
public:
    int largestAltitude(vector<int>& nums) {
        vector<int> highest;
        highest.push_back(0);
        highest.push_back(nums[0]);

        for (int i = 1; i <= nums.size() - 1; i++) {
            highest.push_back(highest[i] + nums[i]);
        }
        sort(highest.begin(), highest.end());
        return highest[highest.size()-1];
    }
};