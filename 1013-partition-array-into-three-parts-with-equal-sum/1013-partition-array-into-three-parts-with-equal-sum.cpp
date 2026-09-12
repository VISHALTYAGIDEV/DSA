class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum = 0;
        int sum1 = 0;
        int count = 0;
        int zero = 0;
        for (int i = 0; i <= arr.size() - 1; i++) {
            if (arr[i] == 0) {
                zero++;
            }
        }
        if (zero == arr.size()) {
            return true;
        }

        for (int i = 0; i <= arr.size() - 1; i++) {
            sum = sum + arr[i];
        }

        if (sum % 3 != 0) {
            return false;
        }
        // if (sum == 0 && (arr.size() % 3) == 0) {
        //     return true;a
        // }

        // else if (sum == 0 && (arr.size() % 3) != 0) {
        //     return false;
        // }

        int num = (sum / 3);
        for (int i = 0; i <= arr.size() - 1; i++) {
            sum1 += arr[i];
            if (sum1 == num) {
                count++;
                sum1 = 0;
            }
        }

        if (count >= 3) {
            return true;
        }

        else {
            return false;
        }

        // if (sum / 3 == 0) {
        //     return true;
        // } else {
        //     return false;
        // }
    }
};