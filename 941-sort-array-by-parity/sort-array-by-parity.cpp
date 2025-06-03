class Solution {
    bool Iseven(vector<int> &nums, int index){
        if(nums[index]%2==0) return true;
        else return false;
    }
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
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