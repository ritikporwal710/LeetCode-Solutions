class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size(),ans=0,maxfreq=0,sz =0, st = 0;

        unordered_map<char,int> mp;

        for(int i =0;i<n;++i){
            mp[s[i]]++;
            sz++;
            maxfreq = max(maxfreq,mp[s[i]]);

            if(sz-maxfreq<=k) ans = max(ans, sz);
            else{
                while(sz-maxfreq>k){
                    sz--;
                    mp[s[st]]--;
                    st++;
                    for(auto x: mp){
                        maxfreq = max(maxfreq, x.second);
                    }
                }
                ans = max(ans, sz);
            }


        }

        return ans;
    }
};