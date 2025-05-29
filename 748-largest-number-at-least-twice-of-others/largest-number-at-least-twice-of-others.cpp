class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int Largestelement = -1;

        for(int i =0; i<nums.size(); i++){
            Largestelement = nums[i];
            for(int j =0; j<nums.size(); j++){
                if(i!=j && (nums[j]*2 > Largestelement)){
                    Largestelement = -1;
                    break;
                }
            }
            if(Largestelement == nums[i]) return i;
        }
    
    return -1;
    }
};