class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<double> averages;
        sort(nums.begin(), nums.end());

        int i = 0, j = nums.size() - 1;
        while (i < j) {
            double val = (nums[i] + nums[j]) / 2.0;
            averages.push_back(val);
            i++;
            j--;
        }

        double minElement = averages[0];

        for(int i =0; i < averages.size(); i++){
            if(averages[i]<minElement) minElement = averages[i];

        }

        
        return minElement;
    }
};