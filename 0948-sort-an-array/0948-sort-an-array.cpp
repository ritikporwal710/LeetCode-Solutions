class Solution {
public:
// for heap sort

void heapify(vector<int> &v, int sz, int ind){
    // while(ind<n){
        int largest = ind;
        int leftInd = 2*ind, rightInd = 2*ind + 1;
        if(leftInd<sz && v[leftInd]>v[ind]){
                largest = leftInd;
        }
         if(rightInd<sz && v[rightInd]>v[largest]){
                largest = rightInd;
        }
        if(largest !=ind){
            swap(v[ind],v[largest]);
            heapify(v,sz,largest);
        }


}

void heapSort(vector<int> &v, int sz){
    for(int i =sz/2;i>=0;i--){
        heapify(v,sz,i);
    }
    for(int i =sz-1;i>=0;i--){
        swap(v[i],v[0]);
        heapify(v,i,0);
    }
}



// for merge sort

// void merge(vector<int> &v, int low, int mid, int high){
//     int i =low,j=mid+1;
//     vector<int> ans;
//     while(i<=mid && j<=high){
//         if(v[i]<= v[j]){ 
//             ans.push_back(v[i]);
//             i++;  
//         }
//         else{
//             ans.push_back(v[j]);
//             j++; 
//         }
//     }
//     while(i<=mid) ans.push_back(v[i++]);
//     while(j<=high) ans.push_back(v[j++]);
//     j=0;
//     for(int i = low; i<=high;++i){
//         v[i] = ans[j++];
//     }
// }


// void mergeSort(vector<int> &v, int low, int high){
//     // if(low<high){
//         if(low >= high){
//             return;
//         }
//         int mid = (high+low)/2;
//         mergeSort(v, low, mid);
//         mergeSort(v, mid+1,high);
//         merge(v,low,mid,high);
//     // }
// }




// for quick sort
//    int partioning(vector<int> &v, int low, int high){
//     int i = low, j = high, pivot = v[low];
//     while(i<j){
//         while(i<=high && v[i]<=pivot) i++;
//         while(j>=low && v[j]>pivot) j--;
//         if(i<j) swap(v[i],v[j]);
//     }
//     swap(v[low], v[j]);
//     return j;
//    }
//    void quick(vector<int> &v, int low, int high){
//     if(low<high){
//         int pivotIndex = partioning(v,low,high);
//         quick(v,low, pivotIndex -1 );
//         quick(v, pivotIndex+1, high);
//     }
//    }
    vector<int> sortArray(vector<int>& v) {
        // heap sort
        int sz = v.size();
        heapSort(v,sz);
        return v;

        // merge sort
        //  int n = v.size();
        // int low = 0, high = n-1; 
        // mergeSort(v, low, high);
        // return v;


        // quick sort
        // int n = v.size();
        // int low = 0, high = n-1; 
        // quick(v, low, high);

        // return v;


        // using insertion sort
        // int n = v.size();
        // for(int i =1;i<n;++i){
        //     if(v[i]<v[i-1]){
        //         int j = i,k = i-1;
        //         while(k>=0 && v[j]<v[k]){
        //             swap(v[j],v[k]);
        //             j=k;k--;
        //         }
        //     }
        // }

        // return v;



        // using bubble sort
        // int n = v.size();
        // for(int i =0;i<n-1;++i){
        //     int f=0;
        //     for(int j=0;j<n-1;++j){
        //         if(v[j+1]<v[j]){
        //          swap(v[j],v[j+1]);
        //          f++;
        //         }
        //     }
        //     if(f==0) break;
        // }

        // return v;




        // using selection sort
        // int n = v.size();
        // for(int i =0;i<n-1;++i){
        //     int mini =v[i], ind = i;
        //     for(int j=i+1;j<n;++j){
        //         if(v[j]<mini){
        //             mini = v[j];
        //             ind = j;
        //         }
        //     }
        //     swap(v[i],v[ind]);
        // }

        // return v;







    }
};