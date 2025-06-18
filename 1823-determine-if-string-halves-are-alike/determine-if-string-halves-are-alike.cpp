class Solution {
    bool IsVowel(string s, int index) {
        char ch = tolower(s[index]);

        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }

public:
    bool halvesAreAlike(string s) {

        int start = 0;
        int end = s.size() - 1;
        int firsthalfcount = 0;
        int secondhalfcount = 0;

        while (start < end) {

            if (IsVowel(s, start)) {
                firsthalfcount++;
            }
           
             if (IsVowel(s, end)) {
                secondhalfcount++;
            }


            start++;
            end--;
        }

        return firsthalfcount == secondhalfcount;
    }
};