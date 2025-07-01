class Solution {
    public int possibleStringCount(String word) {

        int ptr = word.length()-1;
        int count = 1;

        while(ptr > 0){

            if(word.charAt(ptr)==word.charAt(ptr-1)){
                count++;
            }

            ptr--;

        }
        
        return count;
    }
}