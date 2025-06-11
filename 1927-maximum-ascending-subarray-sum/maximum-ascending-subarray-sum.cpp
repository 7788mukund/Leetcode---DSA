class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        // Tc - O(N)
        // Sc - O(1)

        // Aproach -
        // as we know the array has subarray when ith element is small than
        // so we will loop and find sum until we get ith element is small than
        // ith +1 as we got index where condition fails we will add that current
        // index to sum and compare it will out maxsum if its greater than
        // maxsum we will replace it else keep it same edge case when element
        // will be n-1 index so that time we will check for i == size()-1 and
        // there add that index to sum and then check our main condition this
        // way easily
        int maxsum = 0;

        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i == nums.size() - 1) {
                sum += nums[i];
                if (sum > maxsum)
                    maxsum = sum;

                break;
            }

            if (nums[i] < nums[i + 1]) {
                sum += nums[i];
            } else {
                sum += nums[i];
                if (sum > maxsum)
                    maxsum = sum;

                sum = 0;
            }
        }

        return maxsum;
    }
};