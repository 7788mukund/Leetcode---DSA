class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        // Sc = O(1);
        // TC = O(n)+O(n) = O(N)
        // Approach - Firstly perfrom the operations
        // Then use two pointer approach starting both ptr from 0 and 1 moveing them to move zeros
        for(int i =0; i<nums.size()-1; i++){
            if(nums[i]==nums[i+1]){

               nums[i] = nums[i]*2;
               nums[i+1] = 0;
        
            }
        }

        int first =0 , second = 1;

        while(second<nums.size()){
            if(nums[first]==0 && nums[second]!=0){
                swap(nums[first], nums[second]);
                first++;
                second++;
            }
            else if(nums[first]!=0 && nums[second]==0){
                first++; second++;
            }
            else if(nums[first]!=0 && nums[second]!=0){
                first++;
                second++;
            }
            else{
                second++;
            }
        }
        
     

      return nums;
    }
};