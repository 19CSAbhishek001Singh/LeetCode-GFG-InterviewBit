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
// TC: O(N)
// SC: O(N)
class Solution {
public:
    string tree2str(TreeNode* root) {
        if(!root)
            return "";
        string s= to_string(root->val);
        if(root->left) s+="(" + tree2str(root->left) +")";
        else if(root->right) s+="()"; // we created parenthesis for left, when it doesnt exist 
        if(root->right) s+="(" + tree2str(root->right) +")";
        return s;
    }
};