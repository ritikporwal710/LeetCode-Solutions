class Solution {
public:
    int findMin(vector<int>& v) {
        int n = v.size();
        int l = 0, r = n-1,mini = v[0];

        while(l<=r){
            int mid = (l+r)/2;
            if(v[mid] >= v[l]){
                mini = min(mini, v[l]);
                l = mid+1;
            }
            else{
                mini = min(mini, v[mid]);
                r = mid-1;
            }

        }

        return mini;
        
    }
};


/// [3,4,0,1,2]

/// [4,0,1,2,3]