#include<iostream>
using namespace std;
// Input: 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
// Output : 4 7 5 2 6 3 1

// postorder ->bottom up traversal (A lot of question from this)
class Node{
	public:
	int data;
	Node* left;
	Node* right;

	Node(int d){
		data = d;
		left = right = NULL;
	}

};
Node* BuildTree(){
	int d;
	cin>>d;
	//base case if data is -1
	if(d==-1){
		return NULL;
	}
	//otherwise we create new node
	Node* n = new Node(d);
	n->left = BuildTree();
	n->right = BuildTree();

	//last we return address of n
	return n;
}
void Print_Postorder(Node* nd){
	//base case
	if(nd==NULL){
	return;
	}
	//other wise we post order traverse in  tree and print tree
	Print_Postorder(nd->left);
	Print_Postorder(nd->right);
	cout<<nd->data<<" ";

}
int main(){
	Node* root = BuildTree();
	Print_Postorder(root);
}