class Solution {
public:
    void merge(vector<int>& v1, int m, vector<int>& v2, int n) {
        int i =0,j=0;
        int p = 0;
        // if(n==0) return ;
        // if(m==0) return ;
        vector<int> ans(n,0);

        for(int i=0;i<m;++i){
            // v1[n+i] = v1[i];
            // swap(v1[n+i], v1[i]); 
            // v1.pop_back();
            ans.push_back(v1[i]);
        }

        v1 = ans;

        //    for(auto x: v1){
        //     cout<<x<<" ";
        // }

        

        while(i!=m && j!=n){
            if(v1[n+i]<=v2[j]){
                swap(v1[p], v1[n+i]);
                i++;
            }
            else{
                swap(v1[p], v2[j]);
                j++;
            }
            p++;
        }

        while(i!=m){
            swap(v1[p], v1[n+i]);
            i++;p++;
        }
        while(j!=n){
            cout<<j<<endl;
            swap(v1[p], v2[j]);
            j++;p++;
        }
       
        
    }
};
      