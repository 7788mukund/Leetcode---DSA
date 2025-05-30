class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        
        string answer ="";
        for(auto &word: words){
            bool check = true;
            int i =0; int j = word.size()-1;
            while(i<j){
                if(word[i]!=word[j]){
                    check = false;
                }
                i++;
                j--;
            }
            if(check==true){ answer = word; break;}

        }

        return answer;
    }
};