class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        unordered_set<double> numset;
        int start =0; int end = nums.size()-1;

        while(start<end){

            numset.insert((nums[start]+nums[end])/2.0);
            start++;
            end--;

        }
        
        return numset.size();
    }
};