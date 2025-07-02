class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<vector<string>>dp(n+1);
        dp[0]={""};
        for(int i=1;i<=n;i++){
            for(int j=0;j<i;j++){
                for(string x:dp[j]){
                    for(string y:dp[i-1-j]){
                        string t='('+x+')'+y;
                        dp[i].push_back(t);
                    }
                }
            }
        }
        return dp[n];
    }
};