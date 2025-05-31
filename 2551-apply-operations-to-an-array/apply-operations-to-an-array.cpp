class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        //Used extra space as question wanted to return resulting as vector
        // SC - O(n)
        vector<int> result(nums.size(),0);
        //Tc 1st loop - O(n) and 2nd loop O(n) 
        //Total Tc - O(n);

        // Approach made all element 0 in result as we dont need to shift 0 at back
        // then we moved one loop to perfrom operation acording to condition
        // then we added all non zero value to result vector
        for(int i =0; i<nums.size()-1; i++){
            if(nums[i]==nums[i+1]){

               nums[i] = nums[i]*2;
               nums[i+1] = 0;
        
            }
        }
        
        int j =0;
        for(int i =0; i<nums.size(); i++){
            if(nums[i]!=0){
                result[j] = nums[i];
                j++;
            }
        }

      return result;
    }
};