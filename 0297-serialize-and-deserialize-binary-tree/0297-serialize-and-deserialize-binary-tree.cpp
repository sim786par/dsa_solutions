/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(root ==NULL) return "";
        string s = "";
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* node = q.front();
            q.pop();
            if(node == NULL) s.append("null,");
            else{
                s.append(to_string(node->val)+",");
            }
            if(node != NULL){         //left and right null check nhi hua kunki we have to add the null values also
                q.push(node->left);
                q.push(node->right);
            }
        }
        return s;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data.size() == 0) return NULL;
        stringstream s(data);         //it convert the string into input stream
        string str;
        getline(s,str,',');                //getline(stream, variable, delimiter); it is used to read the stream till the delimiter for iteration
        queue<TreeNode*> q;
        TreeNode* root = new TreeNode(stoi(str));
        q.push(root);
        while(!q.empty()){
            TreeNode* node = q.front();
            q.pop();

            getline(s,str,',');
            if(str == "null") node->left = NULL;
            else{
                TreeNode* leftnode = new TreeNode(stoi(str));
                node->left = leftnode;
                q.push(leftnode);
            }
            getline(s,str,',');
            if(str == "null") node->right = NULL;
            else{
                TreeNode* rightnode = new TreeNode(stoi(str));
                node->right = rightnode;
                q.push(rightnode);
            }
        }
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));