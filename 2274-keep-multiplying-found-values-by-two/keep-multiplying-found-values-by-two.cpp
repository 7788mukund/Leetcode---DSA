class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        
        sort(begin(nums),end(nums));
        //sort the array nums then look for the element if found multiply the current orignal vallue  by 2

        for(int i =0;i<nums.size(); i++){
            if(nums[i]==original){
                original *= 2;
            }
        }
        return original ;
    }
};