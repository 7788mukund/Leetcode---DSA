class Solution {
    public int[] pivotArray(int[] nums, int pivot) {

        int lesscnt = 0, equalcnt = 0, greatercnt = 0;

        for (int i = 0; i < nums.length; i++) {

            if (nums[i] < pivot)
                lesscnt++;
            else if (nums[i] > pivot)
                greatercnt++;
            else
                equalcnt++;

        }

        int lessarr[] = new int[lesscnt];
        int equalarr[] = new int[equalcnt];
        int greaterarr[] = new int[greatercnt];
        int lessptr = 0, equalptr = 0, greaterptr = 0;

        for (int i = 0; i < nums.length; i++) {

            if (nums[i] < pivot) {
                lessarr[lessptr] = nums[i];
                lessptr++;
            } else if (nums[i] == pivot) {
                equalarr[equalptr] = nums[i];
                equalptr++;
            } else {
                greaterarr[greaterptr] = nums[i];
                greaterptr++;
            }
        }

        int resultarr[] = new int[nums.length];

        int resultindex = 0;

        for(int i = 0; i<lessarr.length; i++){
            resultarr[resultindex++]=lessarr[i];
        }
        for(int i = 0; i<equalarr.length; i++){
            resultarr[resultindex++]=equalarr[i];
        }
        for(int i = 0; i<greaterarr.length; i++){
            resultarr[resultindex++]=greaterarr[i];
        }

    
    return resultarr;
    }
}