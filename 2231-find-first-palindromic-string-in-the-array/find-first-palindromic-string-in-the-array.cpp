class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        // Tc - N+n/2  (for loop words and while loop i and j)
        // Sc = O(4) = O(1)

        // approach = firstly extracting the word from the vector string example 
        // then comparing the extracted word from front and back if not equal then return false for current word increment i and j

        
        string answer ="";
        for(auto &word: words){
            bool check = true;
            int i =0; int j = word.size()-1;
            while(i<j){
                if(word[i]!=word[j]){
                    check = false; 
                    break;
                }
                i++;
                j--;
            }
            if(check==true){ answer = word; break;}

        }

        return answer;
    }
};