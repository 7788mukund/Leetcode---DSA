class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        // sorting the greed  and cookies
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        // sort(begin(g), end(g));
        // sort(begin(s), end(s));
        

        int Maximum = 0;
        int i = 0;
        int j = 0;
        while (i < g.size() && j < s.size()) {
            if (g[i] <= s[j]) {
                Maximum++;
                i++;
                j++;
            } else {
                j++;
            }
        }
        return Maximum;
    }
};