//root to leaf pahts

#include<iostream>
#include <vector>
using namespace std;

class Node{
	public :
	int data;
	Node* left;
	Node* right;

	Node(int d){
		data = d;
		left = right=NULL;
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
void postOrder(Node* root){
		if(root==NULL){
		return;
		}
		postOrder(root->left);
		postOrder(root->right);
		cout<<root->data<<" ";
}

void PrintRoot2Leafpaths(Node* root,vector<int> &path){
	//base case
	if(root==NULL){
	return;
	}
	if(root->left==NULL &&root->right==NULL){
	for(int node:path){
		cout<<node<<"=>";
	}
	cout<<root->data<<" ";
	cout<<endl;
	return;
	}

	//recursive case
	path.push_back(root->data);
	PrintRoot2Leafpaths(root->left,path);
	PrintRoot2Leafpaths(root->right,path);
	path.pop_back();
	return ;
}
int main(){
	Node* root = BuildTree();
	postOrder(root);	
	vector<int> v;
	PrintRoot2Leafpaths(root,v);
}