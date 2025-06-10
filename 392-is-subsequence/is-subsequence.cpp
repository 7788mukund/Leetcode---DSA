class Solution {
public:
    bool isSubsequence(string s, string t) {
        // Tc = O(N)
        //Sc == O(1)


        // As we can see we just need to search the string inorder into other string
        // So the concept of fast and slow pointer can help us
        //whenever we will find correct matching in both string element we will increse both ptrs
        // if we dont find matching we will only increase the pointer of string in which we want to check
        // so at last if ptr of first string reaches size() of string 1 then its a valid subsequence
        // else its not valid subsequence

        int ptrs = 0;
        int ptrt = 0;

        while(ptrs<s.size() && ptrt < t.size()){

            if(s[ptrs]==t[ptrt]){
                ptrt++;
                ptrs++;
            }
            else{
                ptrt++;
            }
        }

        if(ptrs==s.size()) return true;
        

        return false;
    }
};