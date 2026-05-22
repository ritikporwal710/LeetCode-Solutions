class Solution {
    public int climbStairs(int n) {
        // n=1 , 1 , for n=2 -> 2, for n=3-> 3, for n = 4 
        // 2+2 
        // 1+2+1
        // 1+1+1+1
        // 1 + 1 + 2
        // 2+ 1+ 1

        if(n==1 || n==2) return n; 
        
        int[] arr = new int[n+1];

        arr[1] = 1; 
        arr[2] = 2; 


        for(int i=3; i<=n;i++){
            arr[i] = arr[i-1] + arr[i-2];
        }

        return arr[n];
    }
}