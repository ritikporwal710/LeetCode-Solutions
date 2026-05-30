/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    int ans = Integer.MIN_VALUE; 
    public int maxSum(TreeNode root){
        if(root == null) return 0; 

        int left = maxSum(root.left); 
        int right = maxSum(root.right); 

        if(left <0) left =0;
        if(right <0) right = 0;  
        ans = Math.max(ans, left+right + root.val);

        return root.val + Math.max(left,right);
    }
    public int maxPathSum(TreeNode root) {
        int p = maxSum(root);

        return ans;  
    }
}