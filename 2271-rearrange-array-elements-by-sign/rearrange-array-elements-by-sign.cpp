class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> posnegnum;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                posnegnum.push_back(nums[i]);
            }
        }

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < 0) {
                posnegnum.push_back(nums[i]);
            }
        }

        int ptr = 0;

        for (int i = 0; i < nums.size(); i += 2) {

            nums[i] = posnegnum[ptr];
            ptr++;
        }

        for (int i = 1; i < nums.size(); i += 2) {

            nums[i] = posnegnum[ptr];
            ptr++;
        }

        return nums;
    }
};