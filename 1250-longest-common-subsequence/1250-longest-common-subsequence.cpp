// class Solution {
// public:

//     int lcs(string s1, string s2, int i, int j, vector<vector<int>> &dp){
//         if(i<0 || j<0) return 0;

        
//         if(dp[i][j] != -1) return dp[i][j];
//         if(s1[i] == s2[j]) return dp[i][j] = 1 + lcs(s1,s2, i-1, j-1, dp);
//         return dp[i][j] = max(lcs(s1,s2,i-1,j, dp), lcs(s1,s2, i, j-1, dp));
//     }
//     int longestCommonSubsequence(string s1, string s2) {
//         int n = s1.size();
//         int m = s2.size();

//         vector<vector<int>> dp(n+1, vector<int> (m+1,-1));
        
//         int ans = lcs(s1,s2,n-1,m-1, dp);

//         for(int i =0;i<n; i++){
//             for(int j=0;j<m; j++){
//                 cout<<dp[i][j]<<" ";
//             }
//             cout<<endl;
//         }

//         return dp[n-1][m-1];
        
//     }
// };



class Solution {
public:
    int longestCommonSubsequence(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();

        vector<vector<int>> dp(n+1, vector<int> (m+1,0));

        // for(int i =0;i<=n;++i) dp[i][0] = 0;
        // for(int j=0;j<=m;++j) dp[0][j] = 0;

        for(int i = 1;i<=n;i++){
            for(int j=1;j<=m;j++){
                // cout<<s1[i]<<" "<<s2[j]<<endl;
                if(s1[i-1] == s2[j-1]) dp[i][j]= 1 + dp[i-1][j-1];
                else dp[i][j] =  max(dp[i-1][j], dp[i][j-1]);
            }
        }
        
        // int ans = lcs(s1,s2,n-1,m-1, dp);

        return dp[n][m];
        
    }
};