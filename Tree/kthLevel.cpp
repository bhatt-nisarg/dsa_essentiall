// //Kth level - given a binary tree with N nodes. your task is to print its kth level.
// Input Format
// in the function a pointer to the root node of the binary tree is passed.
// output Format
// return a vector containing nodes at kth level

// expected time complexity O(n)

#include<bits/stdc++.h>
using namespace std;

struct Node{
	int key;
	Node* left,*right;

};

vector<int> printKthLevel(Node* root,int k){
	//create queue
	queue<struct Node*> que;

	//enqueue the root node
	que.push(root);

	//create a set
	vector<int> s;

	//level to track the current level
	int level = 0;
	int flag = 0;

	//iterate the queue till its not empty
	while(!que.empty()){
		//calculate number of nodes in the current level
		int size = que.size();


		///process each node of the current level and enqueue their left and right child to the queue
		while(size--){
			struct Node* ptr = que.front();
			que.pop();

			//if the current leel matches the required level then add into set
			if(level ==k){
				//flag initilized to
				flag = 1;
				//Inserting node data in set
				s.push_back(ptr->key);
			}
			else{
				//traverse to the left child
				if(ptr->left)
					que.push(ptr->left);
				//traverse to right child
				if(ptr->right)
					que.push(ptr->right);	
			}
		}
		//increment the variable by level 1 for each level
		level++;
		//break out the loop if the kth level is rached
		if(flag==1){
			break;
		}
		return s;
	}
}