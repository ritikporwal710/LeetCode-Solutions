class Solution {
public:
    vector<int> productExceptSelf(vector<int>& v) {
        int n = v.size(),maxi =1,ct=0;
        for(int i =0;i<n;++i){
            if(v[i]!=0)
            maxi = maxi * v[i];
            else
            ct++;
        }
        if(maxi == 0) return v;
        for(int i =0;i<n;++i){
            if(ct>=2)
            v[i] = 0;
            else if(v[i] == 0 && ct ==1)
            v[i] = maxi;
            else if(ct ==1)
            v[i] = 0;
            else
            v[i] = maxi/v[i];
        }
        return v;
    }
};