class Solution {
public:
    bool backspaceCompare(string s, string t) {
        if (s == t)
            return true;

        int backspacecountS = 0;
        string result = "";

        int i = s.size() - 1;

        while (i >= 0) {

            if (backspacecountS == 0 && s[i] != '#') {
                result += s[i];
                i--;
            } else if (s[i] != '#' && backspacecountS != 0) {
                backspacecountS--;
                i--;
            } else {
                backspacecountS++;
                i--;
            }
        }

        int j = t.size() - 1;
        int backspacecountT = 0;
        string resultT = "";

        while (j >= 0) {
            if (backspacecountT == 0 && t[j] != '#') {
                resultT += t[j];
                j--;
            } else if (t[j] != '#' && backspacecountT != 0) {
                backspacecountT--;
                j--;
            } else {
                backspacecountT++;
                j--;
            }
        }

        int start = 0, end = result.size() - 1;

        while (start < end) {
            swap(result[start], result[end]);
            start++;
            end--;
        }

        start = 0;
        end = resultT.size() - 1;
        while (start < end) {
            swap(resultT[start], resultT[end]);
            start++;
            end--;
        }

        return result == resultT;
    }
};