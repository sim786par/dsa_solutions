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
    // bool isSameTree(TreeNode* p, TreeNode* q) {
    //     if(p==NULL && q==NULL){                    //both null true
    //         return true;
    //     }
    //     if(p==NULL || q==NULL) return false;        //only one null
    //     if (p->val == q->val){
    //         return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);       //check whole tree
    //     }
    //     return false;                              //if not equal false
    // }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (!p && !q) return true;
        if (!p || !q) return false;
        return (p->val == q->val) && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};