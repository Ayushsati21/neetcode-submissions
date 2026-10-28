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

    void same(TreeNode* p,TreeNode* q,bool* x)
    {
        if(!p&&!q)
        {
            return;
        }
        if(!p||!q||p->val!=q->val)
        {
            *x=false;
            return;
        }
        same(p->left,q->left,x);
        same(p->right,q->right,x);

    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool x=true;
        same(p,q,&x);
        return x;
    }
};
