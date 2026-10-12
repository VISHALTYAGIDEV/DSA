class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> mp;

        for (int i = 0; i < numbers.size(); i++) {

            int need = target - numbers[i];

            if (mp.find(need) != mp.end()) {
                return {mp[need], i};
            }

            mp[numbers[i]] = i;
        }

        return {};
    }
};

// array is not sorted so 2 pointer will not b e used
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& numbers, int target) {
//         // vector<int> nums;
//         int i = 0;
//         int j = numbers.size() - 1;
//         while (i < j) {
//             if ((numbers[i] + numbers[j]) < target) {
//                 i++;
//             }
//             if ((numbers[i] + numbers[j] > target)) {
//                 j--;
//             }
//             if ((numbers[i] + numbers[j]) == target) {
               
//                return {i,j};
//             }

//         }
//         return {};
//     }
// };
