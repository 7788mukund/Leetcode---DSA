class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        
        sort(begin(nums),end(nums));

        for(int i =0;i<nums.size(); i++){
            if(nums[i]==original){
                original *= 2;
            }
        }
        return original ;
    }
};