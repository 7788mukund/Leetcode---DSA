class Solution {
public:
    bool isLongPressedName(string name, string typed) {

        if(name.size()==typed.size() && name != typed) return false;

        int i =0; int j =0;

        bool Ismatched = false;  
        while(j< typed.size()){

            if(name[i]==typed[j]){
                i++;
                j++;
            }
            else if(j>0 && typed[j]==typed[j-1]){
                j++;
            }
            else{
                return false;
            }

        }

    
        return i == name.size() ;    
    }
};