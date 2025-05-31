class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        
        for(int i =0; i<nums.size()-1; i++){
            if(nums[i]==nums[i+1]){

               nums[i] = nums[i]*2;
               nums[i+1] = 0;
        
            }
        }

        int first =0; int second = 1;

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