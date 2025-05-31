class Solution {
public:
    double minimumAverage(vector<int>& nums) {

        vector<double> averages;

        sort(begin(nums),end(nums));

        int start =0; int end = nums.size()-1;

        while(start<end){
            double avg  = (nums[start]+nums[end])/2.0;

            averages.push_back(avg);
            start++;
            end--;
        }

        // int minele = averages[0];
        // for(int i=1; i<averages.size(); i++){
        //     if(averages[i]<minele){
        //         minele = averages[i];
        //     }

        // }
        sort(averages.begin(),averages.end());
        
        return averages[0];
    }
};