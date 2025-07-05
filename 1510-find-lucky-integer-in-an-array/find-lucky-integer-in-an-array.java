class Solution {
    public int findLucky(int[] arr) {
        int freqarr[] = new int[arr.length];


        for(int i = 0; i<arr.length; i++){
            int count = 0;
            for(int j = 0; j<arr.length; j++){
                if(arr[i]==arr[j]){
                    count++;
                }
            }
             freqarr[i] = count;
        }

        int ans = -1;
        for(int i = 0; i<arr.length; i++){

            if(arr[i]==freqarr[i] ){
               ans =  Math.max(ans, arr[i]);
            }

        }

        return ans;
    }
}