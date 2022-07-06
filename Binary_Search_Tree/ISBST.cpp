//ISBST?
//Given a binary tree check if the tree is a bst or not;

method 1 (SImple but wrong): for each node checkif the left node of its smallerthan the node and the right node of its greater node

method 2:(correct but not efficient)
FOr each node check if max value in left subtree is smaller than the node and min value in right subtree greater than the node

method 3 (coorect and efficient)
we can simplyfy using null pointer instead of int_min and int_max values.
bool isBST(Node* root,Node* l =NULL,Node* r=NULL){
	//base condition
	if(root==NULL){
	return true;
	}
	//if left node exist then checkit has correct data or not i.e left node's data should be less than root's data
	if(l!=NULL and root->data<=l->data){
		retur false;
	}

	//if right node exist then check it has correct data or not i.e right node's data should be greater than root's data
	if(r!=NULL and root->data>=r->data){
	return false;
	}

	//check recursively every node
	return isBST(root->left,l,root) and isBST(root->right,root,r);
}
