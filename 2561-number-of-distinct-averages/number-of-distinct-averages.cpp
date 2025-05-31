class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        // Tc = N log N + O(N) = N log N
        // Sc = O(N) extra space 
        // sort the nums
        // make loop using two pointer front and back 
        // insert element into set so no duplicate remain 
        // return numset size meaning no of unique element
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