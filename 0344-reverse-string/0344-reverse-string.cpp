class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size(),i=0;
        while(i <n/2){
            swap(s[i], s[n-1-i]);
            i++;
        }
    }
};