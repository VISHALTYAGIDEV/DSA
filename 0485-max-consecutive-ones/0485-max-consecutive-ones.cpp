class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        vector<int> maximum;
        for (int i = 0; i <= nums.size() - 1; i++) {
            if (nums[i] == 1) {
                count++;
            }
            if (nums[i] == 0) {
                maximum.push_back(count);
                
                count = 0;
                
            }
        }
     
        maximum.push_back(count);
        sort(maximum.begin(), maximum.end());
        return maximum[maximum.size() - 1];
    }
};