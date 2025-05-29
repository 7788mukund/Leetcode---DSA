class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        for(int i =0; i<nums.size(); i++){
            int target = nums[i];
            

            int start = i+1; 
            int end = nums.size()-1;
            if(nums[nums.size()-1]<0) return -1;

            while(start<=end){
                int mid = start+(end-start)/2;
                
                if(nums[mid]+target==0){
                    return abs(nums[mid]);
                }
                else if(abs(nums[mid]) < abs(target)){
                    start = mid+1;
                }
                else{
                    end = mid-1;
                }

            }

        }

    return -1;
        
    }
};