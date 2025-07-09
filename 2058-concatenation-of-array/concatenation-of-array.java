class Solution {
    public int[] getConcatenation(int[] nums) {
        int ptr1 = 0;
        int ptr2 = nums.length;

        int[] answer = new int[nums.length*2];

        int i = 0;
        while(ptr2<answer.length){
            answer[ptr1] = nums[i];
            answer[ptr2] = nums[i];

            ptr1++;
            ptr2++;
            i++;
        }
        
        return answer;
    }
}