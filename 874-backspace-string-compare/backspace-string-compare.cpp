class Solution {
public:
    bool backspaceCompare(string s, string t) {
        //Tc = O(N)
        //Sc =O(1)

        int i = s.size() - 1;
        int j = t.size() - 1;

        while (i >= 0 || j >= 0) {

            // skiping index where we find # as backspace
            int skips = 0;
            while (i >= 0) {
                if (s[i] == '#') {
                    skips++;
                    i--;
                } else if (skips > 0) {
                    skips--;
                    i--;
                } else {
                    break;
                }
            }

            // skipping the # in t and its before char
            int skipt = 0;
            while (j >= 0) {
                if (t[j] == '#') {
                    j--;
                    skipt++;
                } else if (skipt > 0) {
                    skipt--;
                    j--;
                } else
                    break;
            }

            // checking if chracter are same when there is not # found at both index
            if (i >= 0 && j >= 0 && s[i] != t[j])
                return false;
            // checking if one string is finiesh and other not 
            if ((i >= 0) != (j >= 0))
                return false;

            i--;
            j--;
        }
        return true;
    }
};