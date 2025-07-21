class Solution {
    public boolean validMountainArray(int[] arr) {
        if (arr.length < 3)
            return false;

        int DecreaseIndex = 0;

        int i = 0;
        while (i < arr.length - 1) {
            if (arr[i] > arr[i + 1]) {
                DecreaseIndex = i + 1;
                break;
            }
            else if (arr[i] == arr[i + 1]) {
                return false;
            }

            i++;
        }

        if (i == 0 || i == arr.length - 1)
            return false;


        for (int j = DecreaseIndex; j < arr.length ; j++) {
            if (arr[j] >= arr[j - 1]) {
                return false;
            }
        }

        return true;

    }
}