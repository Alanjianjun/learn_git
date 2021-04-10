class Solution {
    vector<int> v;
public:
    vector<int> inorderTraversal(TreeNode* root) {
        if(!root){return v;}
        
        inorderTraversal(root->left);
        v.emplace_back(root->val);
        inorderTraversal(root->right);
        return v;

    }
    Solution(){v.reserve(1024);}
};