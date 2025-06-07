class Solution {
public:
    string reverseWords(string s) {

        int i = 0;
        int j = i + 1;

        while(i<s.size()){
            
            if(s[i]==' '){
                i++;
                j++;
                continue;
            }
            else if(j<s.size()&&s[j]!=' '){
                j++;
            }
            else{
                int start = i;
                int end = j-1;

                while(start<end){
                    swap(s[start],s[end]);
                    start++;
                    end--;
                }
                i = j+1;
                j = i+1;
            }
        }
        return s;
    }
};