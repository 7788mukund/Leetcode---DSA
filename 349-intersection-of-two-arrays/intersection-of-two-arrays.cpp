class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // sort(nums1.begin(), nums1.end());
        // sort(nums2.begin(), nums2.end());

        unordered_set<int> result;
        for (int i = 0; i < nums1.size(); i++) {
            int countOccurance = 0;
            countOccurance = count(nums2.begin(), nums2.end(), nums1[i]);
            if (countOccurance > 0) {
                result.insert(nums1[i]);
            }
        }

        vector<int> Result;
        for (int num : result) {
            Result.push_back(num);
        }

        return Result;
    }
};