class Solution {
public:
    int countStair(vector<int>&v, int n){
        if(n==1 || n ==2) return n;
        if(v[n] != -1 ) return v[n];
        v[n] = countStair(v,n-1) + countStair(v,n-2);

        return v[n];
    }
    int climbStairs(int n) {
        vector<int> v(n+1,-1);
       return countStair(v,n);
    }
};