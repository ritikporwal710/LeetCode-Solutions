class Solution {
public:
    vector<int> topKFrequent(vector<int>& v, int k) {
        int n = v.size();
        priority_queue<pair<int,int>> pq;
        vector<int> ans;
        map<int,int> mp;
        for(int i =0;i<n;++i)
        mp[v[i]]++;

        for(auto x: mp){
            pq.push({x.second,x.first});
        }

    
        while(pq.empty() == false && k>0){
            int a = pq.top().first,b=pq.top().second;
            ans.push_back(b);
            pq.pop();
            k--;
        }
    

        return ans;
    }
};