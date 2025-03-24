class Solution {
public:
    void subsetCreation(vector<vector<int>> &ans, vector<int> &v,vector<int> &temp, int n,int ind){
        if(ind >=n){
            ans.push_back(temp);
            return;
        }
        temp.push_back(v[ind]);
        subsetCreation(ans,v,temp,n,ind+1);
        temp.pop_back();
        subsetCreation(ans,v,temp,n,ind+1);
    }
    vector<vector<int>> subsets(vector<int>& v) {
        int n = v.size();
        vector<vector<int>> ans;
        vector<int> temp;
        subsetCreation(ans,v,temp,n,0);

        return ans;
    }
};