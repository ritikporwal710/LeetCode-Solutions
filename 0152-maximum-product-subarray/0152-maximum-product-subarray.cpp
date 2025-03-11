class Solution {
public:
    int maxProduct(vector<int>& v) {
        int n = v.size(),prev = 1, suff =1,maxi = INT_MIN;
        for(int i =0;i<n;++i){
            if(prev == 0) prev = 1;
            if(suff == 0) suff = 1;

            prev = prev * v[i];
            suff = suff * v[n-1-i];
            maxi = max(maxi, max(prev,suff));
        }

        return maxi;
    }
};