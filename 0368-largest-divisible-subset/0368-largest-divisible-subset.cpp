class Solution{
public:
    vector<int> largestDivisibleSubset(vector<int>& nums){
        sort(nums.begin(),nums.end());
        int n=nums.size(),mx=0,idx=0;
        vector<int> dp(n,1),pre(n,-1);
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i]%nums[j]==0&&dp[j]+1>dp[i]){
                    dp[i]=dp[j]+1;
                    pre[i]=j;
                }
            }
            if(dp[i]>mx){mx=dp[i];idx=i;}
        }
        vector<int> r;
        while(idx!=-1){r.push_back(nums[idx]);idx=pre[idx];}
        reverse(r.begin(),r.end());
        return r;
    }
};
