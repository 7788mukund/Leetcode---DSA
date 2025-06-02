class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> evennum;
        vector<int> oddnum;

// Tc = O(N)+O(N)+O(N) = O(N)
// Space complexity = (N)
// Taking two arrays of even num and odd num  name
//storing of even values to evennum and odd values oddnum 
// as we have evena and odd then iterating trough num  at  i = 0 to i+2 positions
//inserting all even and odd values from the evenum and odd num to nums 
// returning it
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