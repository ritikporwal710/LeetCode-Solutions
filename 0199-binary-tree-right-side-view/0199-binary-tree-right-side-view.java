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
    List<Integer> ans = new ArrayList<>();
    int level =1;
    void generate(TreeNode root, int curLevel){
        if(root == null) return; 
        if(curLevel == level){
            level++;
            ans.add(root.val);
        }

            generate(root.right, curLevel+1);
            generate(root.left, curLevel+1);
    }
    public List<Integer> rightSideView(TreeNode root) {
        generate(root, 1); 
        return ans; 
    }
}