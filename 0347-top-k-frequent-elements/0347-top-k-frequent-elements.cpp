class Solution {
public:
    vector<int> topKFrequent(vector<int>& v, int k) {
        int n = v.size();
        priority_queue<pair<int,int>> pq;
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i =0;i<n;++i)
        mp[v[i]]++;

        for(auto x: mp) pq.push({x.second,x.first});
    
        while(pq.empty() == false && k-- >0){
            ans.push_back(pq.top().second); pq.pop();
        }
    

        return ans;
    }
};