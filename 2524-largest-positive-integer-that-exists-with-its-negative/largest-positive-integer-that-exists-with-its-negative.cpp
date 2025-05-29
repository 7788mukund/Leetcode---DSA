class Solution {
public:
    int findMaxK(vector<int>& nums) {
        // firstly we will sort arry so we can apply binary search
        // Tc = n log n
        sort(nums.begin(), nums.end());
        // applying binary search its tc log n
        //Total tc - nlogn+log n = nlog n

        for (int i = 0; i < nums.size(); i++) {
            int target = nums[i];

            int start = i + 1;
            int end = nums.size() - 1;
            if (nums[nums.size() - 1] < 0)
                return -1;

            while (start <= end) {
                int mid = start + (end - start) / 2;

                if (nums[mid] + target == 0) {
                    return abs(nums[mid]);
                } else if (abs(nums[mid]) < abs(target)) {
                    start = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
        }

        return -1;
    }
};