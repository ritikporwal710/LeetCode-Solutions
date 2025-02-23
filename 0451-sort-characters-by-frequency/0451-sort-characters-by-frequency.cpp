class Solution {
public:
    string frequencySort(string s) {
        int n = s.size(),i=0;
        unordered_map<char,int> mp;
        for(auto x: s){
            mp[x]++;
        }

        vector<pair<int,char>> v;
        for(auto x: mp){
            v.push_back({x.second, x.first});
        }
        sort(v.begin(),v.end(),greater<>());

        for(auto x: v){
            while(mp[x.second]--){
                s[i++] = x.second;
            }
        }

        return s;

    }
};