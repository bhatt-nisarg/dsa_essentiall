//How to  find the diameter of the particular tree
// find the diameter of the binary tree,diameter is defined as the largest distance between any two nodes of the tree
	
// 	Input : 1
// 	       / \
// 	      2   3
// 	     / \   \
// 	    4   5   6
// 	        /
// 	        7

// 	 Output : Diameter : 5       


#include<iostream>
#include <cmath>
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
	PrintTree(root->left);
	PrintTree(root->right);
	cout<<root->data<<" ";
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
//time complexity ? O(n^2)
int diameter(Node* n){
	if(n==NULL){
		return 0;
	}
	// diameter with traverse through root is d1
	int d1 = hight(n->left)+hight(n->right);
	// diameter of left subtree is done recursively
	int d2 = diameter(n->left);
	//diameter of right subtree is done recursively
	int d3 = diameter(n->right);
	return max(d1,max(d2,d3));
}
//better implementation for diameter in O(n) time complexity:)
//Approach : we count hight and diameter of left subtree and right subtree together because in above problem we first calculate hight of the tree and then after this we calculate diameter of the tree it cause O(N^2) time cmplexity
//first make simple class which contain both hight and diameter 
class ComboPair{
public:
	int hight;
	int diameter;
};
ComboPair betterDiameter(Node* node){
	ComboPair c;
	if(node==NULL){
		c.hight = 0;
		c.diameter = 0;
		return c;
	}
	//we get the pair of left subtree and right subtree using this recursion method
	ComboPair left = betterDiameter(node->left);
	ComboPair right = betterDiameter(node->right);

	//now optionally we calculalte high of the tree which require in pair
	c.hight = max(left.hight,right.hight) +1;//it will get hight of the tree

	//now compute diameter 
	int d1 = left.hight + right.hight;
	int d2 = left.diameter;  // this is for left subtree diameter
	int d3 = right.diameter; //this is for right subtree diameter

	//now calculate diameter of whole tree
	c.diameter = max(d1,max(d2,d3));
	return c;

}
int main(){
	Node* root = BuildTree();
	PrintTree(root);
	cout<<endl;
	cout<<"O(n^2) time complexity"<<endl;
	cout<<"Hight  "<<hight(root)<<endl;
	cout<<"Diameter : "<<diameter(root)<<endl;
	cout<<"-----------"<<endl;
	cout<<"O(n) time complexity "<<endl;
	cout<<"Hight : "<<betterDiameter(root).hight<<endl;
	cout<<"Diameter : "<<betterDiameter(root).diameter<<endl;


}
// better implementation of calculate diameter of the tree
