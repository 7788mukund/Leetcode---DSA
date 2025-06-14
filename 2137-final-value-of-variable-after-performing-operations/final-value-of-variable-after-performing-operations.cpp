class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int answer = 0;
        for (string operation : operations) {

            if (operation[0] == '-' || operation[2]=='-') {
                answer -= 1;
            } else {
                answer += 1;
            }
        }
        return answer;
    }
};