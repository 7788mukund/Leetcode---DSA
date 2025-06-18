class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {


        int count= 0;
        for(char jwel : jewels){

            for(char stone : stones){

                if(jwel==stone){
                    count++;
                    
                }
            }
        }
        

        return count;
    }
};