class Solution {
private :
    bool IsXpresent(char x, string word){
        
        int index =  word.find(x);
        if(index != string::npos )
        return true;
        else  return false;
        
    }
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> XIndices;
        
        for(int i=0; i<words.size(); i++){
            string word = words[i];
           
            if(IsXpresent(x,word)){
            XIndices.push_back(i);
            }
            
        }

        return XIndices;

    }
};