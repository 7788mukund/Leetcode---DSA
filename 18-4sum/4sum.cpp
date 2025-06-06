class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> result;

        // if (nums.size() < 4) {
        //     // result.push_back({0});
        //     return result;
        // }

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            for (int j = i + 1; j < nums.size(); j++) {
                if (j >i+1 && nums[j] == nums[j - 1])
                    continue;

                int k = j + 1;
                int l = nums.size() - 1;

                while (k < l) {
                    long long totalsum = 1LL*nums[i] + nums[j] + nums[k] + nums[l];

                    if (totalsum < target) {
                        k++;
                    } else if (totalsum > target) {
                        l--;
                    } else {
                        result.push_back({nums[i], nums[j], nums[k], nums[l]});
                        k++;
                        l--;
                        while (k<l && nums[k] == nums[k - 1])
                            k++;
                        while(k<l && nums[l]==nums[l+1]) l--;
                    }
                }
            }
        }

        return result;
    }
};