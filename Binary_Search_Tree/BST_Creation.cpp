//Binary search tree creation
//we have one array and we have to build a tree

#include<iostream>
#include<vector>

using namespace std;

class Node{
	public:
	int key;
	Node* left;
	Node* right;

	Node(int d){
		this->key = d;
		left=NULL;
		right=NULL;
	}
};

// complexity of this code is O(h) h= hight of the tree
bool Search(Node* root,int key){
	if(root==NULL){
		return false;
	}
	if(key==root->key){
		return true;
	}
	if(key<root->key){
		return Search(root->left,key);
	}
	return Search(root->right,key);
	
	

}
Node* insert(Node* root,int key){
	//base case if root is null then we create new node of given key data
	if(root==NULL){
		return new Node(key);
	}
	//recursive case
	if(key<=root->key){
		root->left = insert(root->left,key);
	}
	else{
		root->right = insert(root->right,key);
	}
	return root;
}

void PrintInOrder(Node * root){
	if(root==NULL){
		return;
	}
	//inorder traversal (left-root-right)
	PrintInOrder(root->left);
	cout<<root->key<<" ";
	PrintInOrder(root->right);
}
//it is use in node delettion with 2 child
Node* find(Node* root){
	// we have to go left minimum from the root 
	// successive inorder means minimum left
	while(root->left!=NULL){
		root = root->left;
		
	}
	return root;
}
//Deletion in BST
Node* remove(Node* root,int key){
	if(root==NULL){
		return NULL;
	}
	//this all cases are for searching key
	if(root->key>key){
		root->left = remove(root->left,key);
	}
	else if(root->key<key){
		root->right = remove(root->right,key);
	}
	//this case is for delete key
	else{
		//we have 3 cases that 
		// key with no child
		if(root->left ==NULL and root->right==NULL){
			//it is simple case
			delete root;
			root = NULL;
			
		}
		//key with 1 child
		//with one child we have 2 case one if key have right child or left child
		else if(root->left==NULL){
			Node* temp = root;
			root = root->right;
			delete temp;
			
		}else if(root->right==NULL){
			Node* temp = root;
			root = root->left;
			delete temp;
			
		}
		else{
		//key with 2 child
		//this is trickest part 
		// first we have to find the inorder succesor 
		Node* temp = find(root->right);
		root->key = temp->key;
		root->right = remove(root->right,temp->key);
		}
	}
	return root;
}

//challenge :Print all the elements in the BST which lies in the range of  k1 and k2;
void PrintRange(Node* root,int k1,int k2){
	if(root==NULL){
		return ;
	}
	if(root->key>=k1 and root->key<=k2){
		// call on both side
		PrintRange(root->left,k1,k2);
		cout<<root->key<<" ";
		PrintRange(root->right,k1,k2);
	}
	else if(root->key>k2){
		PrintRange(root->left,k1,k2);
	}
	else{
		//go to right node
		PrintRange(root->right,k1,k2);
	}
}

//print all path from root to leaf node
void PrintRoot2LeafPaths(Node* root,vector<int> &path){
	//base case if root==NULL or root->is null and root->right is null
	if(root==NULL){
		return ;
	}
	if(root->left==NULL and root->right==NULL){
		//print the vector
		for(int node:path){
			cout<<node<<"=>";
			return;
		}
		cout<<root->key<<"=>";
		return;
	}
	//recursive case
	path.push_back(root->key);
	PrintRoot2LeafPaths(root->left,path);
	PrintRoot2LeafPaths(root->right,path);
	//backtracking
	path.pop_back();
	return;
}
int main(){
	Node* root = NULL;
	int arr[] = {8,3,5,2,7,5,9,1,0,10};
	for(int x:arr){
		root = insert(root,x);
	}
	PrintInOrder(root);
	cout<<endl;

	// int k;
	// cin>>k;
	// remove(root,k);
	// PrintInOrder(root);
	// if(Search(root,k)){
	// 	cout<<"true";
	// }
	// else{
	// 	cout<<"false";
	// }
	// cout<<"Range is: "<<endl;
	// PrintRange(root,5,7);
	vector<int> path;
	PrintRoot2LeafPaths(root,path);
}