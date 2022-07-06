// Remove Half Nodes
// Given a binary tree. your task is to remove all the nodes(which has only one child) and return the inorder traversal of the updated tree.

// Input Format 
// Int the function a pointer to the rooot node of the binart tree is passed
// Output Format
// Return an integer vector containing inorder traversal


// 			2
// 		   / \ 
// 		  7   5
// 		  \    \ 
// 		  6 	9
// 		 / \    /
// 		 1  11  4


// 		 Sample Output: Inorder traversal of the new tree : 1,6,11,2,4

// 		 Explanation 7,5,9 are half nodes as one of their child is null.
void inorder(Node* root, vector<int> &v)
{
    if(root == NULL) return;
    if(root->left) inorder(root->left, v);
    v.push_back(root->key);
    if(root->right) inorder(root->right, v);
}
Node* help(Node * root){
	if(root==NULL)
		return NULL;
	if(root->right)
		root->right ==help(root->right);
	if(root->left)
		root->left = help(root->left);
	if((root->left!=NULL && root->right==NULL) or (root->left==NULL && root->right != NULL)){
		if(root->left) root = root->left;
		else root = root->right;
		root = help(root);
	}
	return root;
}
void inorder(Node* root, vector<int> &v)
{
    if(root == NULL) return;
    if(root->left) inorder(root->left, v);
    v.push_back(root->key);
    if(root->right) inorder(root->right, v);
}

vector<int> removeHalfNode(Node* node){
	root = help(root);
	vector<int> v;
	inorder(root,v);
	return v;
}