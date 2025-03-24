class Solution {
public:
    void comboSum(vector<vector<int>> &ans, vector<int> &v, vector<int> &temp, int sum, int n, int ind){
        if(sum<0) return;
        if(ind>=n){
            if(sum == 0){
                ans.push_back(temp);
            }
            return;
        }
        temp.push_back(v[ind]);
        comboSum(ans, v, temp, sum - v[ind], n, ind);
        temp.pop_back();
        comboSum(ans, v, temp, sum, n, ind+1);
    }
    vector<vector<int>> combinationSum(vector<int>& v, int target) {
        int n = v.size();
        vector<vector<int>> ans;
        vector<int> temp;
        comboSum(ans, v, temp, target , n , 0);

        return ans;
    }
};