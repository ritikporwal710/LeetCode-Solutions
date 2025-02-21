class Solution {
public:
    void merge(vector<int>& v1, int m, vector<int>& v2, int n) {
        int i=0,j=0;
        int p = m-n;
        cout<<"true"<<endl;
        while(i<m && j<n){
            // cout<<i<<" "<<j<<endl;
            if(v2[j]<v1[i]){
                // cout<<v2[j]<<" "<<v1[i]<<endl;
                swap(v2[j],v1[i]);
                sort(v2.begin(),v2.end());
                i++;
                // j++;
            }
            else{
                i++;
            }
        }
        while(j!=n){
            v1[i++] = v2[j++];
        }

    }
};