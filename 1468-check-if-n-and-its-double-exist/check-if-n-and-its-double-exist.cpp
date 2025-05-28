class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort(begin(arr),end(arr));

        for(int i =0; i<arr.size(); i++){
            int target = arr[i]*2;

            int start =0; 
            int end = arr.size()-1;

            while(start<=end){
                int mid = start+(end-start)/2;

                if(arr[mid]==target && mid!=i){
                    return true;
                }
                else if(arr[mid]<target){
                    start = mid+1;
                }
                else{
                    end = mid-1;
                }
            }
        }

        return false;
        
    }
};