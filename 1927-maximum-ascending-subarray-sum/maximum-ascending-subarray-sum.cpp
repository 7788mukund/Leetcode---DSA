class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {

        int maxsum = 0;
        

        int sum = 0;
        for(int i =0; i<nums.size(); i++){
            if(i==nums.size()-1){
                sum += nums[i];
                if(sum>maxsum) maxsum = sum;


                break;
            } 
            

            if(nums[i]<nums[i+1])
            {
                sum +=nums[i];
            }
            else{
                sum+=nums[i];
                if(sum>maxsum) maxsum = sum;

                sum = 0;
            }
        }

        
        

        return maxsum; 
    }
};