class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {


        int countt= 0;
        for(char jwel : jewels){

        countt += count(stones.begin(),stones.end(),jwel);
        }
        

        return countt;
    }
};