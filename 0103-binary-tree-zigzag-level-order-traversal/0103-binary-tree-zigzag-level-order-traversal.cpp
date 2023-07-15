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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root==NULL)
        {
            return result;
        }
        queue<TreeNode*> q;
        q.push(root);
        
        int count = 0;
        
        while(!q.empty()){
            int size = q.size();
           count++;
            vector<int> data;
            
            while(size>0) {
                TreeNode* node = q.front();
                q.pop();
                data.push_back(node->val);
                if(node->left != NULL)
                    q.push(node->left);
                if(node->right != NULL)
                    q.push(node->right);
                size--;
            }
            if(count%2==0)
                reverse(data.begin(),data.end());
            result.push_back(data);
        }
        return result;
    }
};