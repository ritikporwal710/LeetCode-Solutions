class Solution {
public:
    int maxArea(vector<int>& v) {
        int n = v.size(),ans = 0;
        int l=0, r=n-1;
        while(l<r){
            int area = (r-l)*(min(v[l],v[r]));
            ans = max(ans, area);

            if(v[l]<v[r]) l++;
            else if(v[r] < v[l]) r--;
            else{
                l++;r--;
            }
        }

        return ans;
    }
};