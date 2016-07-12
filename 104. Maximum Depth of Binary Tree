/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        else if(!(root->left)&&!(root->right)) return 1;
        else if(!(root->left)&&(root->right)) return (1+maxDepth(root->right));
        else if((root->left)&&!(root->right)) return (1+maxDepth(root->left));
        else {//((root->left)&&(root->right))
        return 1+max((maxDepth(root->right)),maxDepth(root->left));}
    }
    int max(int a,int b){
        if(a>=b) return a;
        else return b;
    }
};
