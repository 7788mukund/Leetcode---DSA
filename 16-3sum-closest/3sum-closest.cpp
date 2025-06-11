class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int i = 0;
        int j = i + 1;
        int k = j + 1;
        int closestsum = -1;

        for (int i = 0; i < nums.size() - 2; i++) {
            for (int j = i + 1; j < nums.size() - 1; j++) {
                for (int k = j + 1; k < nums.size(); k++) {

                    int currentclosestsum = 0;
                    currentclosestsum = nums[i] + nums[j] + nums[k];

                    if (closestsum == -1) {
                        closestsum = currentclosestsum;
                    }
                    else{
                        if(abs(target-currentclosestsum) < abs(target-closestsum))
                            closestsum = currentclosestsum;

                    }
    
                }
            }
        }

        return closestsum;
    }
};