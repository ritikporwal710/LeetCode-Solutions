class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& v, int target) {
        vector<vector<int>> ans;
        int n = v.size();
        sort(v.begin(),v.end());
        for(int i =0;i<n;i++){
        for(int j=i+1;j<n;j++){
            // while(j>1 && j<n && v[j] == v[j-1]) j++;
            int k = j+1,l = n-1;
            while(k<l){
                long long sum = v[i];
                sum += v[j];
                sum += v[k];
                sum += v[l];
                if(sum<target){
                    k++;
                }
                else if(sum>target){
                    l--;
                }
                else{
                    ans.push_back({v[i], v[j], v[k], v[l]});
                    l--;
                    k++;
                    while(j<n-1 && v[j] == v[j+1]) j++;
                    while(l>j && v[l] == v[l+1]) l--;
                    while(k<l && v[k] == v[k-1]) k++;
                }
            }
        }
                    while(i<n-1 && v[i] == v[i+1]) i++;
        
       }
       return ans;
    }
};