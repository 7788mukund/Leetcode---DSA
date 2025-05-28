class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int i =0;  
        while(i<arr.size()){
            if(arr[i]==0){
                int j = arr.size()-1;

                while(j>i){
                    if(j==i+1){
                         arr[j]=0;
                         i+=1;
                    }
                    else{
                        arr[j]=arr[j-1];
                    }
                    j--;
                }
            }
            i++;

        }
    }
};