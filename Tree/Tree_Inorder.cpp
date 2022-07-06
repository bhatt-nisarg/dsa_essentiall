//Tree Inorder 
#include<iostream>
using namespace std;

// Input: 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
//Output : 4 2 7 5 1 3 6
class Node{
	public:
	int data;
	Node* left;
	Node* right;

	Node(int d){
		data = d;
		left=right=NULL;
	}
};

Node* BuildTree(){
	int d;
	cin>>d;
	//base case
	if(d==-1){
		return NULL;
	}
	//recursive case
	Node * n = new Node(d);
	n->left = BuildTree();
	n->right = BuildTree();
	return n;
}
void Print_inorder(Node* root){
	if(root==NULL){
		return ;
	}
	//print sequent first left->root->right
	Print_inorder(root->left);
	cout<<root->data<<" ";
	Print_inorder(root->right);

}
int main(){
	Node * root = BuildTree();
	Print_inorder(root);
}