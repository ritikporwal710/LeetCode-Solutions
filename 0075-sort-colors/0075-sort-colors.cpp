class Solution {
public:
    void sortColors(vector<int>& v) {
        int n = v.size();
        int low =0,mid =0, high = n-1;

        while(mid<=high){
            if(v[mid] == 0){
                v[mid] = v[low];
                v[low] =0;
                low++;
                mid++;
              
            }
            else if(v[mid] == 1){
                v[mid] =1;
                mid++;
            }
            else if(v[mid] == 2){
                v[mid] = v[high];
                v[high] = 2;
                high--;
            }
        }


    }
};