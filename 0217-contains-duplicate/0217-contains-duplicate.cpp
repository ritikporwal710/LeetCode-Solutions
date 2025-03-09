class Solution {
public:
    bool containsDuplicate(vector<int>& v) {
        int n = v.size();
        map<int,int> mp;
        for(int i =0;i<n;++i){
            mp[v[i]]++;
        }
        if(mp.size() == n) return false;

        return true; 
    }
};