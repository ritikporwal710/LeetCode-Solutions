class Solution {
public:
    int minCoin(int n, vector<int>&v, int ct, int amount, int ind, vector<vector<int>> &dp){
        if(amount == 0 ) return 0;
        if(ind == n-1){
            if(amount!=0 && amount%v[ind] == 0) return amount/v[ind];
            else return 1e9;
        }

        // cout<<dp[ind][amount]<<endl;

        if(dp[ind][amount] != -1) return dp[ind][amount];

        
        int notTake = 0 + minCoin(n, v, ct, amount,ind+1, dp);
        int take = INT_MAX;
        if(v[ind]<=amount)
        take = 1 + minCoin(n, v, ct + 1, amount-v[ind], ind, dp);

        dp[ind][amount] = min(take, notTake);

        return min(take, notTake);
    }
    int coinChange(vector<int>& v, int amount) {
        sort(v.begin(),v.end(), greater<int>());
        // for(auto x: v){
        //     cout<<x<<" ";
        // }
        // cout<<endl;
        int n = v.size();

        // if(amount == 0 ) return 0;

        vector<vector<int>> dp(n+1,vector<int>(amount+1,-1));
        int ans = minCoin(n,v,0, amount, 0, dp);

        if(ans == 1e9) return -1;
        return ans;
    }
};