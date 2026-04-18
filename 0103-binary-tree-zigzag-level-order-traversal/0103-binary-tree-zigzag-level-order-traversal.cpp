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
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        
        if(root == NULL) return ans;
        q.push(root);
        bool l_to_r = true;               //for checking left to right traversal
 
        while(!q.empty()){
            vector<int> level;
            int size = q.size();
            for(int i=0;i<size;i++){
                TreeNode* node = q.front();
                q.pop();
                if(node->left != NULL) q.push(node->left);
                if(node->right != NULL) q.push(node->right);

                level.push_back(node->val);
            }
            if(!l_to_r){
                reverse(level.begin(),level.end());               //reverse the left traversal to right
            }
            ans.push_back(level);
            l_to_r = !l_to_r;                                    //change the traversal
            
        }
        return ans;
    }
};