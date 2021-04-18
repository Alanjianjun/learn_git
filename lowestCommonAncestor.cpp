class Solution{
public:
	unordered_map<int,TreeNode*> father;
	unordered_map<int,bool> visited;
	void dfs(TreeNode* root){
		if(root->left!=nullptr){
			father[root->left->val]=root;
			dfs(root->left);
		}
		if(root->right!=nullptr){
			father[root->right->val]=root;
			dfs(root->right);
		}
	}

	TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q){
		father[root->val]=nullptr;
		dfs(root);
		while(p!=nullptr){
			visited[p->val]=true;
			p=father[p->val];
		}

		while(q!=nullptr){
			if(visited[q->val]){return q;}
			q=father[q->val];
		}
		return nullptr;
	}
};