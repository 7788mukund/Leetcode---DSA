class Solution {
    public char nextGreatestLetter(char[] letters, char target) {

        char answer = letters[0];

        int start = 0;
        int end = letters.length - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (letters[mid] > target) {
                answer = letters[mid];
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }

        return answer;
    }
}