class Solution {
public:
    void rotate(vector<vector<int>>& v) {
        int n = v.size();

        // i=0,j=0  -> i=j=0 ,j=n-j-1 = 2
        // i=0, j=1 -> i=j=1 , j=n-j-1 = 1

        // i=1, j=1, -> i=1,j=2

        vector<vector<int>> ans(n,vector<int>(n,-1));

        for(int i=0;i<n;i++){
            int j_ind=n-i-1, i_ind=0;
            for(int j=0;j<n;j++){
                cout<<i<<" "<<j<<"->"<<j<<" "<<n-j-1<<endl;
                ans[i_ind++][j_ind] = v[i][j];
                // cout<<j<<" "<<n-j-1<<" ";
            }
            // cout<<endl;
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                // cout<<ans[i][j]<<" ";
                v[i][j] = ans[i][j];
            }
            cout<<endl;
        }

    }
};