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
    bool isSymmetric(TreeNode* root) {
        return isMirror(root->left,root->right);                //the tree is divided into two and then it is checked that both tree are same or not 
    }

    bool isMirror(TreeNode* leftnode,TreeNode* rightnode){
        if(leftnode == NULL && rightnode == NULL){                           //if both are empty means onnly node
            return true;
        }
        if(leftnode == NULL || rightnode == NULL){            //if(any one is null means there is only one child so false)
            return false;
        }
        return leftnode->val == rightnode->val && isMirror(leftnode->left,rightnode->right) && isMirror(leftnode->right,rightnode->left);
    }                            //main condition comparing both values and sending the left and right of both tree
};