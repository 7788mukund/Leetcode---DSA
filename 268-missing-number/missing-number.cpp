class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // Tc = O(N)
        //Sc = O(N)


        // Take extra space array of nums+1 size initalisze all to -1
        vector<int> num(nums.size()+1,-1);
    // then find out index element and change the value at extra taken array by one
        for(int i =0; i<nums.size(); i++){
            num[nums[i]] +=1;
        }


        // search whweere is the -1 is present return that index
        for(int i =0; i<num.size(); i++)
        {
            if(num[i]==-1){
                return i;
            }
        }
        return nums.size()+1;
    }
};