class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //Tc - O(n) and Space CompPlexSity = O(1);

        //Pivot element is the element that is breaks the series of bigger to small means 5>4 , 4>3, but 2<3  so at element 2 index we can say its our pivotindex
        int PivotIndex = -1;
        for(int i = nums.size()-2; i>=0; i--){
            if(nums[i]<nums[i+1])
            {
                PivotIndex = i;
                break;
            }
        }
        if(PivotIndex == -1)
        {
           reverse(nums.begin(),nums.end());
        }
        else{
            //As array is not sorted in descending means the The pivotIndex rightside has element just greater thna it so lets find it
            int JustGreaterNumThanPivot = PivotIndex+1;

            for(int i = PivotIndex+2; i<nums.size();i++){

                if(nums[i]>nums[PivotIndex]){
                 if(nums[JustGreaterNumThanPivot]>=nums[i])
                 JustGreaterNumThanPivot = i;
                }
            }
        //Swapping the just bigger no than pivot with pivot element
        swap(nums[JustGreaterNumThanPivot],nums[PivotIndex]);

 //Reversing the Array from pivot+1 to nums.size() as array is in descending order so it needs to get into ascending by reversing

        reverse(nums.begin()+(PivotIndex+1),nums.end());

        }

    }
};