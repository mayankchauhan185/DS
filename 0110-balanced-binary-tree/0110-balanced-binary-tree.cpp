/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return dfsHeight(root)!=-1;
        
    }
    int dfsHeight(TreeNode *root) {
        if (root == NULL) return 0;
        
        int lheight = dfsHeight(root->left);
        if(lheight == -1) return -1;
        int rheight = dfsHeight (root-> right);
        if(rheight == -1) return -1;
        
        if(abs(lheight - rheight)>1) return -1;
        return max(lheight,rheight) +1;
    }
};