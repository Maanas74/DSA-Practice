// Que Link:- https://leetcode.com/problems/binary-tree-preorder-traversal/

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
    vector<int> preorderTraversal(TreeNode* root) {
        
        vector<int> a;
        stack<TreeNode*> b;
        
        TreeNode* p = root;
        
        while(!b.empty() || p!=NULL)
        {
            if(p!=NULL)
            {
                a.push_back(p->val);
                b.push(p);
                p=p->left;
            }else{
                p=b.top();
                p=p->right;
                b.pop();
            }
        }
        return a;
    }
};
