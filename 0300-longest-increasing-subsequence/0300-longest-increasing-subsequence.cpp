class Solution {
public:
    int lengthOfLIS(vector<int>& v) {
        vector<int> v3 = v,v2;
        int n = v.size(),prev;
        sort(v3.begin(),v3.end());
        
        v2.push_back(v3[0]);
        prev = v3[0];

        for(int i=1;i<n;++i)
            if(v3[i]!=prev)
            {
                v2.push_back(v3[i]); prev = v3[i];
            }
            
        int p = v2.size();

        vector<vector<int>> mt(n+1,vector<int> (p+1,0));

        for(int i=1;i<=n;++i)
        {
            for(int j=1;j<=p;++j)
            {
                if(v[i-1]==v2[j-1])
                {
                    mt[i][j] = 1 + mt[i-1][j-1];
                }
                else
                {
                    mt[i][j] = max(mt[i-1][j],mt[i][j-1]);
                }
            }
        }
        return mt[n][p];

    }
};