class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n =t.size();
        int i = 0,j =0;

        while(i!=s.size() && j!=n){
            if(s[i] == t[j]) i++;
            j++;
        }

        if(i==s.size()) return true;
        return false; 
    }
};