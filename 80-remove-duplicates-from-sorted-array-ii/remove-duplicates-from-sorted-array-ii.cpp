class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==1) return 1;

        int currentindex = 2;
        int IndexToUpdate = 2;

        

        while (currentindex < nums.size()) {
            if (nums[currentindex] == nums[IndexToUpdate - 2]) {
                currentindex++;
            } else if (nums[currentindex] != nums[IndexToUpdate - 2]) {
                nums[IndexToUpdate] = nums[currentindex];
                currentindex++;
                IndexToUpdate++;
            } else {
                currentindex++;
                IndexToUpdate++;
            }
        }

        return IndexToUpdate;
    }
};