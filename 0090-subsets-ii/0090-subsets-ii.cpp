class Solution {
public:
    void subsetDuplicate(vector<vector<int>> &ans,vector<int> &v,vector<int> &temp, set<vector<int>> &st,int n, int ind){

        if(ind>=n){
            st.insert(temp);
            return;
        }

        temp.push_back(v[ind]);
        subsetDuplicate(ans,v,temp,st,n,ind+1);
        temp.pop_back();
        subsetDuplicate(ans,v,temp,st,n,ind+1);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& v) {
        int n = v.size();
        sort(v.begin(),v.end());
        vector<vector<int>> ans;
        vector<int> temp;
        set<vector<int>> st;
        subsetDuplicate(ans,v,temp, st,n,0);

        for(auto x: st){
            ans.push_back(x);
        }

        return ans;
    }
};