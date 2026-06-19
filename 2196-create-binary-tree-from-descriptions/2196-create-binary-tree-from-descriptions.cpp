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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int,TreeNode*> mp;
        unordered_set<int> child;
        for(auto d : descriptions){
            int parent = d[0];
            int childern = d[1];
            int isleft = d[2];
            if(mp.find(parent) == mp.end()){
                mp[parent] = new TreeNode(parent);
                
            }
            if(mp.find(childern) == mp.end()){
                mp[childern] = new TreeNode(childern);
            }
            if(isleft){
                mp[parent]->left = mp[childern];
            }
            else mp[parent]->right = mp[childern];
            child.insert(childern);
            
        }
        for(auto p : mp){
            if(child.find(p.first) == child.end()){
                    return p.second;
            }
        }
        return NULL;
    }
};