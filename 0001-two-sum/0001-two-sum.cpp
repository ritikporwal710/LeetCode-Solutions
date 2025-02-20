class Solution {
public:
    vector<int> twoSum(vector<int>& v, int target) {
        int n = v.size();
        vector<int> ans;
        map<int,int> mp;
        for(int i=0;i<n;++i){
            if(mp[target - v[i]]){
                ans.push_back(i);
                ans.push_back(mp[target-v[i]]-1);
                return ans;
            }
            else
                mp[v[i]] = i+1;
        }

        return ans;
        

    }
};