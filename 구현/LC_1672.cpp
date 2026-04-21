class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) 
    {    
        int N = 0;

        for(int i = 0; i < accounts.size(); i++)
        {    
            int sum = 0;

            for(int j = 0; j < accounts[i].size(); j++){
                sum += accounts[i][j];
            }

            if(sum > N){
                N = sum;
            }
        }

        cout << N;
        return N;
    }
};
