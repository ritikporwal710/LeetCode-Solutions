class Solution {
public:
    map<char,int> mp,mp2;
    bool ans = false;
    bool check(){
        ans = true;
        for(auto x: mp){
            if(mp2[x.first] != x.second){
            ans = false;
            break;
            }
        }
        return ans;
    }
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.size(),n2= s2.size();
        if(n1>n2) return false;
        for(auto x: s1){
            mp[x]++;
        }

        for(int i =0;i<n1;++i){
            mp2[s2[i]]++;
        }
        bool res = check();
        if(res == true) return true;        

        for(int i =n1;i<n2;++i){
            mp2[s2[i-n1]]--;
            mp2[s2[i]]++;
            bool res = check();
            if(res == true) return true;
        }

        return false;
    }

};