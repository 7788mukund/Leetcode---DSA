class Solution {
    public int[] leftRightDifference(int[] nums) {
        int[] leftsum = new int[nums.length];
        int[] rightsum = new int[nums.length];

        leftsum[0] = 0;
        rightsum[rightsum.length - 1] = 0;

        int j = nums.length - 2;
        for (int i = 1; i < nums.length; i++) {

            leftsum[i] = leftsum[i - 1] + nums[i - 1];

            rightsum[j] = rightsum[j + 1] + nums[j + 1];
            j--;

        }

        for (int i = 0; i < nums.length; i++) {

            nums[i] = Math.abs(leftsum[i] - rightsum[i]);
        }

        return nums;
    }
}