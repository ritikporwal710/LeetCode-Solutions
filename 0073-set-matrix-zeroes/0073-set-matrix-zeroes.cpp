class Solution {
public:
    void setZeroes(vector<vector<int>>& v)   {
        int n = v.size();
        int m = v[0].size();
        unordered_map<int,int> mp1,mp2;
        for(int i =0;i<n;++i){
            for(int j=0;j<m;++j){
                if(v[i][j] == 0){
                    mp1[i] =0;
                    mp2[j] =0;
                }
            }
        }

        for(int i =0;i<n;++i){
            for(int j =0;j<m;++j){
                if((mp1.find(i) != mp1.end()) || (mp2.find(j) != mp2.end())){
                    v[i][j] =0;
                }
            }
        }

        return;
    }
};