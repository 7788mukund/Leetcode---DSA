class Solution {
public:
    char findTheDifference(string s, string t) {

        char result = 0;

        for(char ch : s) result ^= ch;

        for(char cha : t ) result^= cha;

     return result;  
    }
};