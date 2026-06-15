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
    int widthOfBinaryTree(TreeNode* root) {  //level order
        if(root==NULL) return 0;
        long long width =0;
        queue<pair<TreeNode*,int>> q;       //for storing the node and index
        q.push({root,0});
        while(!q.empty()){
            int size = q.size();
            long long level_min = q.front().second;       //find the min index of the level it will be needed to subtract the each node index for reducing overflow
            long long first,last;
           
            for(int i=0;i< size;i++){
                long long curr_id = q.front().second - level_min;  //long long to handle the large indexing
                TreeNode* curr_node = q.front().first;
                q.pop();
                
                if(i==0) first = curr_id;
                if(i==size-1) last = curr_id;

                if(curr_node->left){
                    q.push({curr_node->left,curr_id*2+1});      //o indexing formula 2*i+1 for left
                }
                if(curr_node->right){
                    q.push({curr_node->right,curr_id*2+2});   //o indexing formula 2*i+2 for right
                }
            }
            width = max(width,last-first+1);    //width size = left-right+1
        }
        return width;
    }
};