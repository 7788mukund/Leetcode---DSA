class Solution {
public:
    int findMaxK(vector<int>& nums) {
      sort(nums.begin(),nums.end());

      
    // sorted the array as largest element at last will come then check for it from front side of array to util we have negative numbers
    //mistake got error - when all array is negative just check last index after sorting
    
    for(int i = nums.size()-1; i>0 ; i--){
        if(nums[i]<0) return -1;
        int maximum = nums[i];
        int j =0;

        while(nums[j]<0){
          if(maximum == abs(nums[j]))
            return maximum;
           else 
            j++;
        }

    }

      return -1;
        
    }
};