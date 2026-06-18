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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if(root == NULL) return {};
        vector<vector<int>> result;
        vector<int> path;
        dfs(root,targetSum,0,path,result);
        return result;
    }
    void dfs(TreeNode* node,int targetSum,int sum,vector<int>& path,vector<vector<int>>& result){
        if(!node) return;
        sum += node->val;
        path.push_back(node->val);
        if(!node->left && !node->right && sum == targetSum){
            result.push_back(path);
        }
        dfs(node->left,targetSum,sum,path,result);
        dfs(node->right,targetSum,sum,path,result);
        path.pop_back();
    }
};