//how you can find hight of the tree
//Helper FUnction : hight of the tree 
//total time complxity of this function is O(N)

#include<iostream>
using namespace std;

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
	if(d==-1){
		return NULL;
	}
	//other wise make new node
	Node* n = new Node(d);
	n->left = BuildTree();
	n->right= BuildTree();

	return n;
}
void PrintTree(Node * root){
	if(root==NULL){
		return;
	}
	cout<<root->data<<" ";
	PrintTree(root->left);
	PrintTree(root->right);
}
//helper function hight of the tree
int hight(Node * root){
	if(root==NULL){
		return 0;
	}
	int h1 = hight(root->left);
	int h2 = hight(root->right);
	return 1+max(h1,h2);
}
int main(){
	Node* root = BuildTree();
	PrintTree(root);
	cout<<endl;
	cout<<hight(root);

}
