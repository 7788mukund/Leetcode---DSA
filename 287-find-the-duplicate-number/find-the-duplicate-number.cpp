class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // TC = NlogN
        //Sc = O(1)
        //Approach just sort the array  so duplicate can come together
        sort(nums.begin(), nums.end());
        // then searching from one index to last index 
        // checking whether i-1 is same to ith element;
        for(int i =1; i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                return nums[i];
            }
        }

       return -1; 
    }
};