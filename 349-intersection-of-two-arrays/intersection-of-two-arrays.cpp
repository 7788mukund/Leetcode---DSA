class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        set<int> setnums1(begin(nums1),end(nums1));

        set<int> setnums2(begin(nums2),end(nums2));

        vector<int> result;

        for(auto &iterator : setnums1){
            if(setnums2.find(iterator)!=setnums2.end())
            {
                result.push_back(iterator);
            }
        }
        return result;
    }
};