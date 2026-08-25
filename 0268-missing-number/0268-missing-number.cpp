class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long long sum2 = 0;
        long long sum1 = (nums.size()*(nums.size()+1))/2;

        for(int i=0;i<=nums.size()-1;i++){
sum2+=nums[i];
        }
return sum1-sum2;
    }
};