class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //Tc = O(N)
        //Sc = O(1)

        // Edge case handling
        if(nums.size()==1) return 1;

        int currentindex = 2;
        int IndexToUpdate = 2;

        // Approach - This thhis question of  two pointer as array is sorted and need to remove element occuring more than twice 
        // slow and fast pointer technique
        // Watched the solution will come back again to solve it

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