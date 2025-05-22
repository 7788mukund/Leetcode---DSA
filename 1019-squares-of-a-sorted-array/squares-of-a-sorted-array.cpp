class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       vector<int> SortedSqArray(nums.size());


       for(int &num:nums){
         num *= num;
       }

       int start =0;
       int end = nums.size()-1;
       int position = nums.size()-1;
       while(start<=end){
            if(nums[start]<nums[end]){
                SortedSqArray[position]=nums[end];
                end--;
                position--;
            }
            else {
                SortedSqArray[position]=nums[start];
                start++;
                position--;
            }


       }



    return SortedSqArray;
  }
};