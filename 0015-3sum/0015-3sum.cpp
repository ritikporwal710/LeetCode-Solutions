class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& v) {
         vector<vector<int>> res;
         int n =v.size();
         if(n<3) return res;

         sort(v.begin(),v.end());
         vector<vector<int>> ans;

         int i=0,j=n-1;
         int p = 0,q=0;

        for(int p = 0;p<n;++p){
            int q = n-1;
            int k = p+1;
            if(p>0 && v[p] == v[p-1]) continue;
            while(k<q){
                int target= v[p] + v[q] + v[k];
                if(target <0){
                    k++;
                }
                else if(target>0){
                    q--;
                }
                else{
                    ans.push_back({v[p],v[k],v[q]});
                    k++; q--;
                    while(k<q && v[q] == v[q+1]) q--;
                    while(k<q && v[k]== v[k-1]) k++;
                }
            } 
        }
        return ans;
    }
};



 // while(k<q){

            // }
            // if(target<=0){
            //     int k = p+1;
            //     while(k<q){
            //         target = v[p] + v[q];
            //         if(target + v[k] == 0){
            //             ans.push_back({v[p],v[k],v[q]});
            //             // cout<<v[k]<<endl;
            //             int prev = v[q];
            //             while(q>p && v[q] == prev){
            //             q--;
            //             // k = p+1;
            //             }
            //             // p--;
            //             // break;
            //         }
            //         else k++;
            //     }
            // }
            // else{
            //     int k = q-1;
            //     while(k>p){
            //         target = v[p] + v[q];
            //         if(target + v[k] == 0){
            //             ans.push_back({v[p],v[k],v[q]});
            //             cout<<v[k]<<endl;

            //             // while()
            //             int prev = v[q];
            //             while(p<q && v[q] == prev){
            //             q--; 
            //             // k = p+1;
            //             }
            //             // p--;
            //             // break;
            //         }
            //         else k--;
            //     }
            // }