class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        //Tc = O(N)'
        //Sc = O(1)

        // Take two pointer as the string is sorted form means char of word1 and word2
        // are in same sequence , so lets traverse them
        // Using one inner and outer pointer for index of string vector and index for the string into that vector to point particular character
        // comparing each char of the string at ith index and performing the traverse
        // if match not found then breaking the loop and return false
        // if they match increment index
        // if index reaches the size of string 1 then incremating pointer and index value set back to 0
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