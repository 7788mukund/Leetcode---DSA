class Solution {
public:
    int missingNumber(vector<int>& nums) {

        // sort(nums.begin(),nums.end());

        int countt =0;

        for(int i =0; i<nums.size(); i++){
            int ans = count(nums.begin(),nums.end(),countt);
            if(ans == 0) return countt;
            else{
                countt++;
            }
        }
        
        return nums.size();
    }
};