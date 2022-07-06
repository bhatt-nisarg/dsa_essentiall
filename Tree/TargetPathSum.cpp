//Target path sum
// given the root of binary tree and an integer targetpath sum return all root to leaf paths where each paths's sum equals targetSum
// return an empty vector if no such path exists.
// Input Format
// in the function a pointer to the root node of the binary tree is passed
// Output format 
// Return a vector of vectors containing all those root to leaff paths 
// sample input
//            5
//           / \ 
//          4   8
//         /   / \
//        11  13  4
//       /  \    / \
//      7    2  5   1


//      Sample Output : [[5,4,11,2],[5,8,4,5]]      


#include<iostream>
#include<vector>
using namespace std;

class Node{
	public:
	int val;
	Node* left,*right;

	Node(int d){
		val = d;
		left=right=NULL;
	}
};

vector<vector<int>> vv;
void help(Node* root,int a,vector<int> &v,int b){

	if(root==NULL) return ;
	if(root->left==NULL && root->right==NULL){
		if(a==b+root->val);
		{
		v.push_back(root->val);	
		vv.push_back(v);
		v.pop_back();
		}
		return;
	}
	
	if(root->left){
		v.push_back(root->val);
		help(root->left,a,v,b+root->val);
		v.pop_back();
	}
	if(root->right){
		v.push_back(root->val);
		help(root->right,a,v,b+root->val);
		v.pop_back();
	}
}

vector<vector<int>> pathSum(Node* root,int targetSum){
	vv.clear();
	vector<int> v;
	help(root,targetSum,v,0);
	return vv;
}



//other method
// it return only true false
bool Haspathsum(node* root,int sum){
	if(Node==NULL){
		return 0;
	}
	bool ans= 0;

	int subSum = sum-Node->data;

	// if we reach a leaf node and sub sum become true then
	if(subSum==0 && Node->left==NULL && Node->right==NULL){
		return 1;
	}
	//other wise check both subtrees
	if(Node->left)
		ans = ans || Haspathsum(Node->left,subSum);
	if(Node->right)
		ans = ans||Haspathsum(Node->right,subSum);
	return ans;
}