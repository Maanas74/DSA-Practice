// Que Link:- https://leetcode.com/problems/binary-tree-postorder-traversal/

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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> b;
        
        if(root==NULL)
            return b;
        
        stack<TreeNode*> a;
        stack<int> c;
        a.push(root);
        
        while(!a.empty())
        {
            TreeNode* p = a.top();
            a.pop();
            
            c.push(p->val);
            
            if(p->left)
            {
                a.push(p->left);
            }
            
            if(p->right)
            {
                a.push(p->right);
            }
            
        }
        
        while(!c.empty())
        {
            b.push_back(c.top());
            c.pop();
        }
        
        return b;
    }
};
