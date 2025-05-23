class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> num(nums.size(), 0);
        int j = 0;
        for (int i = 0; i < n; i++) {

            num[j] = nums[i];
            j += 2;
        }
        int ptr = 1;
        for(int k = n; k<nums.size(); k++ ){
            
            num[ptr]=nums[k];
            ptr+=2;

        }

        return num;
    }
};