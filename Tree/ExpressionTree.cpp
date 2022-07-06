Expression Tree
Given a full binary expression tree consisting of basic binary operators(+,-,*,/) and some integers in the form of string, your task is to evaluate the expression tree.
note: All the node are in the form of string.

Input : in the function a pointer to the root node of the binary tree is passed.
Output Format
Return an integer representing the final value of the expression 
Sample Input : 

	+
   / \ 
  3   * 
     / \
    +   2  
   / \
  5   9 

  Sample Output : 31
  Explanation : ((5+9)*2)+3)=31  //INorder 

bool isOp(string data){
	if(data=="+" or data=="-" or data=="*" or data=="/")
		return true;
	return false;	
}
int evalTree(Node* root){
	if(root==NULL) return 0;
	if(!isOp(roo->key)) return stoi(root->key);  //stoi means string to integer

	if(root->key=="+"){
		return evalTree(root->left)+evalTree(root->right);
		}
		if(root->key=="-"){
		return evalTree(root->left)-evalTree(root->right);
		}
	if(root->key == "*"){
	return evalTree(root->left)*evalTree(root->right);

	}
	if(root->key=="/"){
		return evalTree(root->left)/evalTree(root->right);
	}	


}  