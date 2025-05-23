class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int MaximumWealth = 0;
        
        for(int i = 0; i<accounts.size(); i++){
            int ithCustomerWealth = 0;
            for(int j =0; j<accounts[0].size(); j++){
                ithCustomerWealth+= accounts[i][j];
            }
            MaximumWealth = max(ithCustomerWealth,MaximumWealth);
        }

        return MaximumWealth;
            
    }
};