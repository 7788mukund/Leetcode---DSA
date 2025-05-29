class Solution {
public:
    int findMaxK(vector<int>& nums) {
        // first we will sort array which will take O(n log n) tc
        // sorting beaucse we can have maximum number at end and its -negtive number at start
        //fast access
        sort(begin(nums), end(nums));
        
        // using two pointer approach to solve the problem as we need to solve the problem in 
        //O(n) time complexity for finding the element

        //Total tc = O(n log n )+ o(n) =  O (n log n) 
        
        int start = 0;
        int end = nums.size() - 1;
        if (nums[end] < 0)
            return -1;

        while (start < end) {

            int numstart = nums[start];
            int numend = nums[end];

            if (numstart + numend == 0) {
                return nums[end];
            } else if (abs(numstart) < abs(numend)) {
                end--;
            } else
                start++;
        }

           return -1;
    }
};

// Mistakes - use proper abs double check situation where abs is needed
// think at edge cases
