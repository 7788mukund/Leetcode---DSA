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

        int maxsum = nums[0];

        for(int i = 1; i<nums.length; i++){
            maxsum = Math.max(nums[i],maxsum);
        }

        int sum = 0;
        for (int num : mynum) {
            sum += num;
        }

        if(mynum.size()==0) return maxsum;
        else
        return sum;
    }
}