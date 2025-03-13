class Solution {
public:
    int search(vector<int>& v, int target) {
        int n = v.size();
        int l = 0,r = n-1;
        while(l<=r){
            int mid = (l+r)/2;
            if(v[mid] == target) return mid;
            if(v[mid]> target){
                if(target >= v[l] || v[r] > v[mid]){
                    r = mid-1;
                }
                else{
                    l = mid+1;
                }
            }
            else{
                if(target <= v[r] || v[mid] > v[l]){
                    l = mid+1;
                }
                else{
                    r = mid-1;
                }
            }
        }

        return -1;
    }
};