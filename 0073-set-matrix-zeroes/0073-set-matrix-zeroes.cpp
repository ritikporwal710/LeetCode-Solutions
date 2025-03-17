class Solution {
public:
    void setZeroes(vector<vector<int>>&v) {
        int m = v.size(),n = v[0].size();
        unordered_map<int,int> m1,m2;
        for(int i=0;i<m;++i)
        {
            for(int j=0;j<n;++j)
            {
                if(v[i][j] ==0)
                {
                    m1[i]++;
                    m2[j]++;
                }
                  
            }
        }

        for(int i=0;i<m;++i)
        {
            for(int j=0;j<n;++j)
            {
                if(m1[i]>0 || m2[j]>0)
                v[i][j] =0;
                  
            }
        }

        
        
        
    }
};