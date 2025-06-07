class Solution {
    //Function to reverse the string before ' ' space
    void reversestring(string& s, int startindex, int endindex) {
        while (startindex < endindex) {
            swap(s[startindex], s[endindex]);
            startindex++;
            endindex--;
        }
    }

public:
    string reverseWords(string s) {
        // Using two pointer we can reverse the string from the point we find '' white space 
        // its very simple if we got '' space at ith index we will skip it
        // if got white space at jth index we will take j-1 index and i index
        // reverse the chars from ith index to j -1 index 
        // hence our string will be reverse using words reverse
        

        int i = 0;
        int j = i + 1;

        while (i < s.size()) {

            if (s[i] == ' ') {
                i++;
                j++;
                continue;
            } else if (j < s.size() && s[j] != ' ') {
                j++;
            } else {
                reversestring(s, i, j - 1);
                i = j + 1;
                j = i + 1;
            }
        }
        return s;
    }
};