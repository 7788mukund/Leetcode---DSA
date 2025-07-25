class Solution {
    public int getMinDistance(int[] nums, int target, int start) {

        int answer = Integer.MAX_VALUE;

        for (int i = 0; i < nums.length; i++) {
            if (nums[i] == target) {
                answer = Math.min(answer, Math.abs(i - start));
            }
        }

        return answer;

    }
}