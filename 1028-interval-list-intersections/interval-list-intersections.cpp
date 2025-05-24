class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList,
                                             vector<vector<int>>& secondList) {
        vector<vector<int>> Intersections;

        // Here we will use two pointer has it can be done using loops to which
        // will have big time complexity Tc = O(n+m)
        int i = 0;
        int j = 0;
        // here we use min max and decided its intersecting or not

        // logic - suppose two number to intersect when one is small and one is
        // between that range one is greater than both example 0 ,2 to check 1
        // intersect or not so 0 is smallest and 1 is greater than 0 but small
        // than 2 so 1 is intersection of them.
        while (i < firstList.size() && j < secondList.size()) {
            int start = max(firstList[i][0], secondList[j][0]);
            int end = min(firstList[i][1], secondList[j][1]);

            if (start <= end) {
                Intersections.push_back({start, end});
            }

            // Here we find the element that is smallest at end and increment it
            // beacause the greater number has chanes that it can the starting
            // point of next start and maybe the next starting point be small
            // than it
            if (firstList[i][1] < secondList[j][1])
                i++;
            else
                j++;
        }

        return Intersections;
    }
};