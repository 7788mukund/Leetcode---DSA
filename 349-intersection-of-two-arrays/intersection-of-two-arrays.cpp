class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        // sort(nums1.begin(), nums1.end());
        // sort(nums2.begin(), nums2.end());

        unordered_set<int> result;

        for(int i =0; i<nums1.size(); i++){
            for(int j =0; j<nums2.size(); j++){
                if(nums1[i]==nums2[j])
                {
                    result.insert(nums1[i]);
                }
            }
        }

        vector<int> result1;

        for(int num : result)
        {
            result1.push_back(num);
        }
        return result1;
    }
};