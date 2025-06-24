class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> posnegnum;

        // Storing first positive number in begin of temparr
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                posnegnum.push_back(nums[i]);
            }
        }
         
         //storing negative number in temparr after positive
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < 0) {
                posnegnum.push_back(nums[i]);
            }
        }

        int ptr = 0;
        // putting positive number at indexs  its to be required
        // 0 , 2 , 4 indexs as even indexes
        for (int i = 0; i < nums.size(); i += 2) {

            nums[i] = posnegnum[ptr];
            ptr++;
        }

        // putting negative number at required odd indexes
        // eg indexes = 1,3,5

        for (int i = 1; i < nums.size(); i += 2) {

            nums[i] = posnegnum[ptr];
            ptr++;
        }

        return nums;
    }
};