class Solution {
public:
    bool halvesAreAlike(string s) {

        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u',
                                      'A', 'E', 'I', 'O', 'U'};
        int count = 0;
        for (int i = 0; i < s.size() / 2; i++) {

            if (vowels.count(s[i]))
                count++;

            if (vowels.count(s[i + s.size() / 2]))
                count--;
        }

        return count==0;
    }
};