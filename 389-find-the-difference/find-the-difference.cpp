class Solution {
public:
    char findTheDifference(string s, string t) {

        sort(begin(t), end(t));
        sort(begin(s), end(s));

        int ptrs = 0, ptrt = 0;

        while (ptrs < s.size() && ptrt < t.size()) {

            if (s[ptrs] == t[ptrt]) {
                ptrs++;
                ptrt++;
            } else {
                ptrs++;
            }
        }

        return t[ptrt];
    }
};