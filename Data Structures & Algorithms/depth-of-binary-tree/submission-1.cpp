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
    void depth(TreeNode*root,int len,int* maxi)
    {
        if(root==NULL)
        {   
            return;
        }
            len++;
            *maxi=max(*maxi,(len));
            depth((root)->left,len,(maxi));
            depth((root)->right,len,(maxi));
    }
    int maxDepth(TreeNode* root)
    {
        int maxi=0,len=0;
       depth(root,len,(&maxi)); 
       return maxi;
    }
};
