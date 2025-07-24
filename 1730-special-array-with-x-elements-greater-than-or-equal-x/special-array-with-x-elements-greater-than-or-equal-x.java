class Solution {
    public int specialArray(int[] nums) {

        Arrays.sort(nums);

    
        for (int i = 0; i <= nums.length; i++) {

            int start = 0;
            int end = nums.length - 1;
            while (start <= end) {
                int mid = start + (end - start) / 2;

                if (nums[mid] >= i) {
                    end = mid - 1;

                } else {
                    start = mid + 1;
                }

            }

            int count = nums.length - start;
            if (count == i)
                return i;
        }

        return -1;
    }
}