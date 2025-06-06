class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        
       string  word1merged = "";
       string word2merged ="";

       for(string word : word1){
         word1merged+= word;
       }
       for(string word : word2){
         word2merged+= word;
       }

        if(word1merged==word2merged) return true;

        return false;
    }
};