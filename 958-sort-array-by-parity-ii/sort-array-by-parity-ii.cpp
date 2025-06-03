class Solution {
    // Function tells us whether the index is even or odd
    // return true or false
    bool Iseven(vector<int>& nums, int index) {
        if (nums[index] % 2 == 0)
            return true;
        else
            return false;
    }
    public:
        vector<int> sortArrayByParityII(vector<int> & nums) {

            // Tc = O(N)
            //Sc = O(1)
            //Approach - as we are asked to check of even and odd index and add according values at their even and odd places
            // So the solution can be thought as we will check current index 
            //if index is value is even then we will skip it to next+1 index to skip odd index
            // same for odd index
            // out loop will run until evenindex and odd index are less than nums size
            
            int evenindex = 0;
            int oddindex = 1;
            while(evenindex<nums.size() && oddindex<nums.size()){
                if(Iseven(nums,evenindex)) evenindex+=2;
                else if(!Iseven(nums,oddindex)) oddindex+=2;
                else{
                    swap(nums[evenindex],nums[oddindex]);
                }
            }
           
            return nums;
        }
    };