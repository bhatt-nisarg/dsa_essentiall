//Minimum depth 
// Given a binary tree with N nodes. your task is to find the minimmum depth.
// Input Format
// in the function a pointer to the root node of the binary tree is passed.
// Output Format
// Return an integer representing minimum depth.
// sample Input:
// 	   2
//    / \
//   7   5
//    \   \
//    9   1
//   / \
//  11  4
//  Sample Output : 3;
//  Explanation : Minimum depth is between nodes 2 and 1 since minimum depth is defined as the number of nodes along the shortest path the root node down to the nearest leaf node
//  
/*
Recursive solution: 
-if it is a leaf node then return 1;
- if left tree is null then recur to right subtree and vice versa
-if both left and right are not null then return( minimum of both hight+1)
*/

#include <bits/stdc++.h>
using namespace std;

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
	if(d==-1){
		return NULL;
	}
	Node* n = new Node(d);
	n->left = BuildTree();
	n->right = BuildTree();
	return n;
}
int minDepth(Node * root){
	//corner case . should never be hit unless the code is called root = NULL
	if(root==NULL)
		return 0;

	// base case : leaf node. this accounts for hight 1
	if(root->left ==NULL && root->right==NULL){
		return 1;
	}
	if(!root->left){
		return minDepth(root->right)+1;
	}
	if(!root->right){
		return minDepth(root->left)+1;
	}

	return min(minDepth(root->left),minDepth(root->right))+1;
}

// Approach
// int minDepth(Node* root){
// 	int res = INT_MAX;
// 	queue<pair<Node*,int>> q;
// 	int d=1;
// 	q.push({root,d});
// 	while(!q.empty()){
// 		Node* f = q.front().first;
// 		d = 1+q.front().second;
// 		if(f->left==NULL && f->right==NULL)
// 			res = min(res,q.front().second);
// 		q.pop();
// 		if(f->left) q.push({f->left,d});
// 		if(f->right) q.push({f->right,d});

// 	}
// 	return res;
// }
int main(){
	Node* root= BuildTree();
	cout<<minDepth(root)<<endl;
}



