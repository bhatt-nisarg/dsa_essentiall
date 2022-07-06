//Build a tree from a level order traversal

// Build a BinaryTree from level order input,-1 in input represents NULL

// Input : 1 2 3 4 5 -1 6 -1 -1 7 -1 -1 -1 -1 -1
// output :
//   	   1
//       / \
//      2   3
//     / \   \
//    4  5   6
//      /
//     7   
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
		left  =  right = NULL;
	}
};

//we made(Build) tree from the given data
Node* level_order_Build(){
	int d;
	cin>>d;
	Node* root = new Node(d);
	queue<Node*> q;
	q.push(root);
		while(!q.empty()){
		Node* temp = q.front();
		q.pop();
		
			int c1,c2;
			cin>>c1>>c2;//it take next two child of 
			if(c1!=-1){
				temp->left = new Node(c1);
				q.push(temp->left);
			}
			if(c2!=-1){
				temp->right = new Node(c2);
				q.push(temp->right);
			}
		
	}
	return root;

}
//after we made tree we print tree in level order format
void level_order_print(Node* root){
	queue<Node*> q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		Node* temp = q.front();
		if(temp==NULL){
			cout<<endl;
			q.pop();
			//if temp is null and we want to push new null before  it we have to check that after pop element if queue is empty or not
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
	return ;

}
int main(){
	Node * root = level_order_Build();
	level_order_print(root);

}