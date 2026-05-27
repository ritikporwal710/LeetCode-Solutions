class Solution {
public:
    int findKthLargest(vector<int>& v, int k) {
        // sort(v.begin(),v.end(),greater<int>());

        // // 6,5,
        // return v[k-1];

        int n = v.size();
        priority_queue<int> pq; 

        for(int i=0;i<n;i++){
            if(pq.size() == 0){
                pq.push(-v[i]);
            }else{
                if(pq.size() == k){
                    if(v[i]>-pq.top()){
                        pq.pop();
                        pq.push(-v[i]);
                    }
                }else{
                    pq.push(-v[i]);
                }
            }
        }
        // cout<<pq.top()<<endl;


        return -pq.top();

    }


    // 3, 2 
};