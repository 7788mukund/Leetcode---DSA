class Solution {
    public int[] getConcatenation(int[] nums) {

        int[] answer = new int[nums.length*2];

    
        for(int i = 0; i<nums.length; i++){
            answer[i] = nums[i];
        }

        int ptr = answer.length/2;
        for(int j = 0; j<nums.length; j++){
            answer[ptr] = nums[j];
            ptr++;
        }
        return answer ;
    }
}