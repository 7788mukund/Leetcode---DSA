class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int i =0; int j=0;
    // Tc - O(n+m) Sc - O(1)
    // we will use while loop to iterate the arrays 
    // as array is sorted so it becomes easy solve the problem
    // approach - as the if the nums1 element is less than nums2 element we increse ptr nums1
    // and vice versa
    // why so beause if we want target to achive we need to move grater value which is minimum but equal in both


        while(i<nums1.size() && j < nums2.size()){
            if(nums1[i]==nums2[j]){
                return nums1[i];
            }
            else if(nums1[i]<nums2[j]){
                i++;
            }
            else j++;
        }
       return -1;   
    }
};