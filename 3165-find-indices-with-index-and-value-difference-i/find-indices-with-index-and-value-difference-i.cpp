class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference,
                            int valueDifference) {
        
        vector<int> answer(2,-1);
        if(nums.size()==1 && indexDifference==0 &&valueDifference==0 ){
            answer[0] = 0;
            answer[1] = 0;
            return answer;
        }
        for (int i = 0; i < nums.size(); i++) {

            for (int j = 0; j < nums.size(); j++) {
                if (i != j) {
                    if (abs(i - j) >= indexDifference) {
                        if(abs(nums[i]-nums[j])>=valueDifference)
                        {
                            answer[0]= i;
                            answer[1]=j;
                            return answer;
                        }
                    }
                }
            }
        }
        return answer;
    }
};