class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> triplet;
        sort(nums.begin(),nums.end());

        for (int i = 0; i < nums.size() - 2; i++) {
            if(i>0 && nums[i]==nums[i-1]) continue;
            int j = i + 1;
            int k = nums.size() - 1;
           
            while (j < k) {

                int totalsum = nums[i] + nums[j] + nums[k];

                if (totalsum == 0) {
                    triplet.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                    while(nums[j]==nums[j-1] &&j<k){
                        j++;
                    }

                } else if (totalsum < 0) {
                    j++;
                } else {
                    k--;
                }
            }
        }

        return triplet;
    }
};