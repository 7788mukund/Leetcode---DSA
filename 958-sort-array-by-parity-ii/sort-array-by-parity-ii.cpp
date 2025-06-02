class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> evennum;
        vector<int> oddnum;



        for(int num :nums){
            if(num%2==0) {
               evennum.push_back(num);
                
            }else{
                oddnum.push_back(num);

            }
            
        }

        int ptreven = 0;
       for(int even : evennum){
        nums[ptreven] = even;
        ptreven+=2;
       }

       int ptrodd = 1;
       for(int odd : oddnum){
        nums[ptrodd] = odd;
        ptrodd+=2;
       }


    return nums;
    }
};