class Solution {
    vector<int> v;
public:
    vector<int> preorderTraversal(TreeNode* root) {
        
        if (!root) {return v;}
        v.emplace_back(root->val);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
        return v;
    }
};