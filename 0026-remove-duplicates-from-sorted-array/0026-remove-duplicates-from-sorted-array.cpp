class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int unique =1;
        int i=0;
        int j= 1;
        while(j<=nums.size()-1){
            if(nums[i]==nums[j]){
                j=j+1;
            }
            else if(nums[i]!=nums[j]){
                i=i+1;
                nums[i]=nums[j];
                unique =unique+1;
                j=j+1;
            
            }
        }
        return unique;
    }
};