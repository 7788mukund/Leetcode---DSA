class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort(begin(arr),end(arr));
        // TC = O(Log N + Log M)
        // Sc = O(1);

        // Approach - First sorting array then using ith index and seraching its arr[i]*2 multiple in the array while i!=mid
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