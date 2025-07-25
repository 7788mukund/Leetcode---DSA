class Solution {
    public int maxSum(int[] nums) {
        if (nums.length == 1)
            return nums[0];

        Set<Integer> mynum = new HashSet<>();

        for (int i = 0; i < nums.length; i++) {
            if (nums[i] < 0)
                continue;
            else
                mynum.add(nums[i]);
        }

        if (mynum.size() == 0) {
            Arrays.sort(nums);
            return nums[nums.length - 1];
        }

        int sum = 0;
        for (int num : mynum) {
            sum += num;
        }

        return sum;
    }
}