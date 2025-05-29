class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {

       // approach question says that find the houses that are same at ith element of the array1
       // so we will count the element when it reamins true after checking distance of all the houses 

    //    Tc - N^2
    //Sc = O(1)

        int differencecount = 0;

        for (int i = 0; i < arr1.size(); i++) {
            bool Issafe = true;

            for (int j = 0; j < arr2.size(); j++) {

                if (abs(arr1[i] - arr2[j]) <= d) {
                    Issafe = false;
                    break;
                }
            }
            if (Issafe)
                differencecount++;
        }
        return differencecount;
    }
};