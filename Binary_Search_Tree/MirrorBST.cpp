//Mirror a BST

// Given a binary tree.convert it into its mirror form. A binary tree is said to be mirrore when left and right children of all non leaf nodes are interchanged.
// Input Format : in the function pointer to the root of the binart tree is passed.
// Output Format : return the pointer to the mirrored tree.

// sample :
   
//    1				   	   1
//   / \        =>        / \
//  3   2                2   3
//     / \              / \
//    5   4            4   5

// steps:
// 1) call Mirror for left-subtree   i.e Mirror(left->subtree)
// 2) call Mirror for right-sub tree i.e MIrror(right->subtree)
// 3) swap left and right subtree.size
// 		temp = left-subtree
// 		left-subtree = right-subtree
// 		right-subtree = temp

void mirror(Node* node){
	if(node==NULL){
		return;
	}
	else{
		Node* temp;

		//do this for subtree
		mirror(node->left);
		mirror(node->right);

		// swap the pointers in this node
		temp = node->left;
		node->left = node->right;
		node->right = temp;
	}
}