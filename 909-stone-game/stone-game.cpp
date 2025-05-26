class Solution {
public:
    bool stoneGame(vector<int>& piles) {

        int begin = 0, end = piles.size() - 1;
        int alicePoints = 0, bobPoints = 0;
        int TurnCounter = 0;

        while (begin < end) {
            if (TurnCounter % 2 == 0) {
                if (piles[begin] < piles[end]) {
                    alicePoints += piles[end];
                    end--;
                } else
                    alicePoints += piles[begin];
                begin++;
            } else {
                if (piles[begin] < piles[end]) {
                    bobPoints += piles[end];
                    end--;
                } else
                    bobPoints += piles[begin];
                begin++;
            }
        }

        if (bobPoints < alicePoints) {
            return true;
        } else
            return false;
    }
};