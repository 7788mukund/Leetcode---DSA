class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
            

        if(digits[digits.size()-1]+1 != 10){
            digits[digits.size()-1] = digits[digits.size()-1]+1;
            return digits;
        }
        else if(digits.size()==1){
            digits[0] = 1;
            digits.push_back(0);
        }
        else{
            for(int i = digits.size()-1; i>=0 ; i--){
                
                if(digits[i]+1 == 10){
                 digits[i] = 0;
                 if(i==0){
                    digits.insert(digits.begin(),digits[i]+1);
                 }
                }
                else{
                    digits[i]+=1;
                    return digits;
                }

            }
        }
    
    



      return digits;  
    }
};