class Solution {
public:
    int minElement(vector<int>& nums) {
        
        int mini = INT_MAX;
        for(int i = 0; i<nums.size(); i++){

            int rem = 0;
            while(nums[i]>0){
                rem += nums[i]%10;
                nums[i]/=10;   
            }
             nums[i] = rem;
             mini = min(mini,nums[i]);


        }

        return mini;
    }
};