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
    boolean validate(TreeNode root, long mini, long maxi){
        if(root == null) return true;
        if(root.val <= mini || root.val >= maxi) return false; 

        return validate(root.left, mini, root.val) && validate(root.right, root.val, maxi);
    }
    public boolean isValidBST(TreeNode root) {
        long left = Long.MIN_VALUE, right = Long.MAX_VALUE; 
        return validate(root,left,right);
    }
}