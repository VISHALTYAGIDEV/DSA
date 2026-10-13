//brute force
// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         for(int i=0;i<=nums.size()-1;i++){
//             for(int j=i+1;j<=nums.size()-1;j++){
// if(nums[j]<nums[i]){
// int temp = nums[j];
// nums[j]=nums[i];
// nums[i]=temp;
// }
//             }
//         }
       
//     }
// };

//optimised code
class Solution {
public:
int par(vector<int>& nums,int low,int high){
    int pivot = nums[low];
    int i=low;
    int j= high;
    while(i<j){
        while(nums[i]<=pivot && i<=high-1){
            i++;
        }
        while(nums[j]>pivot && j>=low+1){
            j--;
        }
        if(i<j){
            swap(nums[i],nums[j]);
        }
    }
    swap(nums[low],nums[j]);
    return j;
}




void qs(vector<int>& nums,int low,int high){
if(low<high){
    int pivotindex = par(nums,low ,high);
    qs(nums,low,pivotindex-1);
    qs(nums,pivotindex+1,high);
}
}

    void sortColors(vector<int>& nums) {
        qs(nums,0,nums.size()-1);
        
    }
};