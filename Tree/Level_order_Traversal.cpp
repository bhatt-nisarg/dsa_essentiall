//Level order traversal(BFS)  it  is like 
/*

Todo : implement level order traversal
breadth  first search
print a binary tree using level order Traversal

Input : 
	     1
      / \
     2   3
    / \   \
   4  5   6
     /
    7   

 Output:
 	1
 	2 3
 	4 5 6
 	7

//it uses queue data structure it is a breadth first search traversal
*/ 	    
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
		left = right = NULL;
	}
};

Node* BuildTree(){
	int d;
	cin>>d;
	if(d==-1){
		return NULL;
	}
	Node* root = new Node(d);
	root->left = BuildTree();
	root->right = BuildTree();
	return root;
}
void Level_order(Node* node){
	queue<Node*> q;
	q.push(node);
	q.push(NULL);
	
	while(!q.empty()){
		Node * temp = q.front();
		if(temp==NULL){
			cout<<endl;
			q.pop();
			//insert a new null for the next level
			if(!q.empty()){
				q.push(NULL);
			}
		}
		else{
			q.pop();
			cout<<temp->data<<" ";

			if(temp->left){
				q.push(temp->left);
			}
			if(temp->right){
				q.push(temp->right);
			}
		}
		
	}
	return;
}

int main(){
	Node* root = BuildTree();
	Level_order(root);
}


