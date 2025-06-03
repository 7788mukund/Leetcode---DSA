class Solution {
    // Function tells us whether the index is even or odd
    // return true or false
    bool Iseven(vector<int> &nums, int index){
        if(nums[index]%2==0) return true;
        else return false;
    }
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        // Tc = O(N) , Sc = O(1);
        // Approach 
        // as we know we just need to shift even number at front rest odd at back
        // so we can us two pointer concept evenindex ptr and evenindexptr+1;
        // writing down condition if we got the index as even then increse ptr
        // if both index element are even then incrementing both
        // if evenptr found odd and ptr found even then swap them
        // as result array got in term as asked in question
        if(nums.size()==1) return nums;

        int evenptr = 0;
        int ptr = 1;

        while(ptr<nums.size()){
            
            if(Iseven(nums,evenptr)){
                evenptr++;
                ptr++;
            }else if(!Iseven(nums,evenptr)&& Iseven(nums,ptr)){
                swap(nums[evenptr], nums[ptr]);
                evenptr++;
                ptr++;
            }
            else{
                ptr++;
            }
        }
     return nums;   
    }
};