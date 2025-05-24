class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> Xindices;

        for(int i =0; i<words.size(); i++){
            string word = words[i];
            for(int j =0; j<word.size(); j++){

                if(word[j]==x){
                    Xindices.push_back(i);
                    break;
                }

            }
        }

        return Xindices;

    }
};