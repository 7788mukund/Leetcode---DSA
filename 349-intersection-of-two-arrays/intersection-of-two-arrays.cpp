class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        vector<int> result;

        for (int i = 0; i < nums1.size(); i++) {
            if(i>0 && nums1[i]==nums1[i-1]) continue;
            int target = nums1[i];
            int start = 0;
            int end = nums2.size() - 1;

            while (start <= end) {
                int mid = start + (end - start) / 2;

                if (target == nums2[mid]) {
                    result.push_back(target);
                    break;
                } else if (target < nums2[mid]) {
                    end = mid - 1;
                } else {
                    start = mid + 1;
                }
            }
        }
        

        return result;
    }
};