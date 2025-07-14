class Solution {
    public int minElement(int[] nums) {

        for(int i = 0; i<nums.length; i++){

            int rem = 0;
            while(nums[i]>0){
                rem += nums[i]%10;
                nums[i]/=10;   
            }
             nums[i] = rem;
        }

        int answer = nums[0];
        for(int i = 1; i<nums.length; i++){
            answer = Math.min(nums[i], answer); 
        }

    return answer;
        
    }
}