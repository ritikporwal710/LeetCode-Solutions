class Solution {
public:
    int coinMaker(vector<vector<int>> &ans, vector<int> &v, int sum, int n, int ind){
        // cout<<v[ind]<<endl;
        
        if(ind==0){
           if(sum%v[ind] ==0) {
            ans[ind][sum] = sum/v[ind];
           }else{
            ans[ind][sum] = 1e9;
           }

           return ans[ind][sum];
        }


        if(ans[ind][sum] !=-1) return ans[ind][sum];
        int one = INT_MAX;
        if(v[ind] <= sum)
        one = 1 + coinMaker(ans, v,sum-v[ind],n,ind);
        int two = coinMaker(ans, v,sum, n, ind-1);
        ans[ind][sum] = min(one,two);
        return min(one,two);
    }
    int coinChange(vector<int>& v, int amount) {
        int n = v.size();
        vector<vector<int>> ans(n, vector<int> (amount+1,-1));
        // for(int i =0;i<=amount;++i){
        //     ans[0][i] = amount%v[0] == 0 ? amount/v[0] : 1e9;
        // }
     

        int p = coinMaker(ans,v, amount, n, n-1);

        if(p== 1e9) return -1;
        return p;
    }
};