// brute force solution , time comp = nlogn, space = logn .
//  class Solution {
//  public:
//      vector<int> sortedSquares(vector<int>& nums) {
//          for(int i=0;i<=nums.size()-1;i++){
//              nums[i]=nums[i]*nums[i];
//          }
//          sort(nums.begin(),nums.end());
//          return nums;
//      }
//  };

// optimised solution using two pointer , time comp =o(n) , space comp =o(n)
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        int size = nums.size();

        vector<int> neg;
        vector<int> pos;

        // 1. Negative and positive elements ko alag karo
        for (int i = 0; i < size; i++) {
            if (nums[i] < 0) {
                neg.push_back(nums[i]);
            } else {
                pos.push_back(nums[i]);
            }
        }

        // 2. Negative part ko square karo
        for (int i = 0; i < neg.size(); i++) {
            neg[i] = neg[i] * neg[i];
        }

        // Square ke baad negative numbers ka order ulta hoga
        reverse(neg.begin(), neg.end());

        // 3. Positive part ko square karo
        for (int i = 0; i < pos.size(); i++) {
            pos[i] = pos[i] * pos[i];
        }

        // 4. Dono sorted arrays ko merge karo
        int i = 0;
        int j = 0;
        int id = 0;

        int n = neg.size();
        int m = pos.size();

        vector<int> res(n + m);

        while (i < n && j < m) {

            if (neg[i] <= pos[j]) {
                res[id] = neg[i];
                i++;
            } 
            else {
                res[id] = pos[j];
                j++;
            }

            id++;
        }

        // 5. Agar negative array mein elements bach gaye
        while (i < n) {
            res[id] = neg[i];
            i++;
            id++;
        }

        // 6. Agar positive array mein elements bach gaye
        while (j < m) {
            res[id] = pos[j];
            j++;
            id++;
        }

        return res;
    }
};