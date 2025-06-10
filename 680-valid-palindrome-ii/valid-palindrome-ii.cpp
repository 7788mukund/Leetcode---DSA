class Solution {
    bool ispalindrome(string& s, int i, int j) {
        while (i < j) {
            if (s[i] != s[j])
                return false;

            i++;
            j--;
        }
        return true;
    }

public:
    bool validPalindrome(string s) {

        // int i = 0;
        // int j = s.size() - 1;

        // bool chekpalindrome = true;
        // while (i < j) {

        //     if (s[i] != s[j])
        //         chekpalindrome = false;

        //     i++;
        //     j--;
        // }

        // if (chekpalindrome == true)
        //     return true;

        int start = 0;
        int end = s.size() - 1;

        while (start < end) {

           if(s[start]!=s[end]){

            return ispalindrome(s,start,end-1)||ispalindrome(s,start+1,end);
           }

            start++;
            end--;
        }

        return true;
    }
};