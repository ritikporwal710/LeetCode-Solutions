class Solution {
public:
    vector<int> productExceptSelf(vector<int>& v) {
         int n = v.size(),ct=0, prod=1;
         vector<int> ans(n,0);
         for(int i = 0;i<n;++i){
            if(v[i] == 0) ct++;
            else{
                prod = prod * v[i];
            }
         }
         
         if(ct>1) return ans;

         for(int i =0;i<n;++i){
            if(ct ==1)
                if(v[i] ==0) ans[i] = prod;
                else ans[i] = 0;
            else 
                ans[i] = prod/v[i];
         }

         return ans;
         
    }
};