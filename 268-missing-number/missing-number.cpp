class Solution {
public:
    int missingNumber(vector<int>& nums) {

        //Tc = O(n)
        //Sc =O(1)
        //Calculate the acutal sum of given range with formule
        // n*n+1/2
        //subtract current sum from acutal sum we will get out missing number
        int actual_sum = (nums.size()*(nums.size()+1))/2;

        int current_sum =0;
        for(int num: nums){
            current_sum += num;
        }

        return actual_sum-current_sum;
        
    }
};