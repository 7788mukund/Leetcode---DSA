class Solution {
public:
    string interpret(string command) {
        int index1 = 0;
        int index2 = 1;
        string GoalParser = "";

        while (index1 < command.size()) {

            if (command[index1] == 'G') {
                GoalParser += 'G';
                index1++;
                index2++;
            } else if (command[index1] == '(' && command[index2] == ')') {
                GoalParser += 'o';
                index1 += 2;
                index2 = index1+1;
            } else {
                GoalParser += "al";
                index1 += 4;
                index2 = index1+1;
            }
        }
        return GoalParser;
    }
};