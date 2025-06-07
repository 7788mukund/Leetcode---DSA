class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int pointerword1 = 0;
        int indexword1 = 0;

        int pointerword2 = 0;
        int indexword2 = 0;

        while (pointerword1 < word1.size() && pointerword2 < word2.size()) {

            char word1char = word1[pointerword1][indexword1];
            char word2char = word2[pointerword2][indexword2];

            if (word1char != word2char)
                return false;

            indexword1++;
            indexword2++;

            if (indexword1 == word1[pointerword1].size()) {
                indexword1 = 0;
                pointerword1++;
            }

            if (indexword2 == word2[pointerword2].size()) {
                indexword2 = 0;
                pointerword2++;
            }

        }
        return (pointerword1 == word1.size() && pointerword2 == word2.size());
             
    }
};