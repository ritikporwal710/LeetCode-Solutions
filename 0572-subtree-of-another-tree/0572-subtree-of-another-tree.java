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
    public boolean check(TreeNode root, TreeNode subRoot){
        if(root == null && subRoot == null) return true; 
        if(root == null || subRoot == null || root.val != subRoot.val) return false;
        
        return check(root.left, subRoot.left) && check(root.right, subRoot.right);
    }
    public boolean isSubtree(TreeNode root, TreeNode subRoot) {
        if(root == null) return false;
        boolean ans = false; 
        if(root.val == subRoot.val){
            ans = check(root,subRoot);
        }

        return ans || isSubtree(root.left, subRoot) || isSubtree(root.right, subRoot);

    }
}