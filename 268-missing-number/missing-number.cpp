class Solution {
public:
    int missingNumber(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        int target = 0;

        for(int i =0; i<nums.size()+1; i++){
            
            int start =0, end= nums.size()-1;

            bool found = false;

            while(start<=end){
                int mid = start+(end-start)/2;

                if(nums[mid]==target){
                    found=true;
                    target++;
                    break;
                }
                else if(nums[mid]<target){
                    start = mid+1;
                }
                else{
                    end = mid-1;
                }
            }
                if(!found){
                return target;
                }
            
        }
        
        return nums.size();
    }
};