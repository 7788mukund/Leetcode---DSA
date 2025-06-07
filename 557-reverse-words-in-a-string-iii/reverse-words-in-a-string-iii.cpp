class Solution {
public:
    string reverseWords(string s) {
        
        int index = 0;

        while(index<s.size()){

            if(s[index]==' ') continue;
            int spaceindex = index;
            for(spaceindex; spaceindex<s.size(); spaceindex++){
                    if(s[spaceindex]==' ') break;
            }

            int start = index ;
            int end = spaceindex-1;

            while(start<end){
                swap(s[start],s[end]);
                start++;
                end--;
            }

            index = spaceindex+1;

        }
        return s;
    }
};