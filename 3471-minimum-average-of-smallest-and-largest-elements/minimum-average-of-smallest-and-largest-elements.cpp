class Solution {
public:
    double minimumAverage(vector<int>& nums) {

        // Sc = O(n)
        // Tc = NlogN + O(N) + NlogN = N log N 

        //Aproach = sort nums so larger and min element comes 1 and n-1
        // take two pointer at start and end to calculate the avg of them and store in avg array
        //then sort avg so we can get the minimum element at 0th index;
        

        vector<double> averages;

        sort(begin(nums),end(nums));

        int start =0; int end = nums.size()-1;

        while(start<end){
            double avg  = (nums[start]+nums[end])/2.0;

            averages.push_back(avg);
            start++;
            end--;
        }

        sort(averages.begin(),averages.end());
        
        return averages[0];
    }
};