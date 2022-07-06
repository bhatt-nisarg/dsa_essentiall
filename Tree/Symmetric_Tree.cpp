// //Symmetric Tree
// Given a binary tree with N nodes. Your task is to check whether it is a mirror of itself (i.e,symmetric arroud center).
// Input Format :
// in the function a pointer to the root node of the binary tree is passed
// return true if symmetric otherwise return false;
//Time Complexity O(N)
// Auxilary Space : O(h) where h is the maximum hight of the tree
#include<iostream>
#include<queue>
using namespace std;

class Node{
	public:
	int data;
	Node* left;
	Node* right;
	Node(int d){
		data = d;
		left = right= NULL;
	}
};
Node* BuildTree(){
	int d;
	cin>>d;
	if(d==-1){
		return NULL;
	}
	Node* n = new Node(d);
	n->left = BuildTree();
	n->right = BuildTree();
	return n;
}
bool isMirror(Node* root1,Node* root2){
	//if both trees are empty then ther are mirror images
	if(root1==NULL && root2==NULL)
		return true;

	/*
	For two trees to be mirror images,the following three conditions must be true
	1) their root node's key mustbe same
	2) left subtree of left tree and right subtree of right tree have to be mirror image
	3)roght subtree of left tree and left subtree of right tree have to be mirror images
	*/
	if(root1 && root2 && root1->data == root2->data)	{
		return isMirror(root1->left,root2->right) && isMirror(root1->right,root2->left);
		//if none of the above condition is true then root1 and root 2 are not mirror image
		return false;
	}
	
}
//Return true is a tree is symmetric i.e mirror image of itself 
bool isSymmetric(Node* root){
	queue<Node*> q1;
	queue<Node*> q2;
	if(root==NULL||(root->right==NULL && root->left==NULL)) return true;

	if(root->right==NULL || root->left==NULL) return false;
	q1.push(root->left);
	q2.push(root->right);
	while(!q1.empty() && !q2.empty()){
		Node* f1 = q1.front();
		q1.pop();
		Node* f2 = q2.front();
		q2.pop();
		if(q1.empty() && !q2.empty()) return false;
		if(!q1.empty() && q2.empty()) return false;
		if(f1->left==NULL && f2->right!=NULL) return false;
		if(f1->left!=NULL && f2->right==NULL) return false;
		if(f1->data != f2->data) return false;
		if(f1->left) q1.push(f1->left);
		if(f1->right) q1.push(f1->right);
		if(f2->right) q2.push(f2->right);
		if(f2->left) q2.push(f2->left);
	}
	if(q1.empty()&&q2.empty()) return true;
	return false;
}
int main(){
	Node* root = BuildTree();
	if(isSymmetric(root)){
		cout<<"true";
	}else{
		cout<<"false";
	}
}