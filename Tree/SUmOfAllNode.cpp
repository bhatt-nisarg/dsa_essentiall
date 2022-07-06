// //Sum of all node
// given a binary tree with N nodes your task is to return the sum of all nodes.

// Input Format : in the function a pointer to the root node of the binary tree is apssed.
// Output Format : return a integer representing sum of all nodes


#include <bits/stdc++.h>
using namespace std;
struct Node {
    int key;
    Node* left, *right;
};

int sumBT(Node* root)
{   
  
    
    // Code here
    queue<struct Node*> q;
    q.push(root);
    
    int sum;
    while(!q.empty()){
         struct Node * temp = q.front();
         
         sum += temp->key;
         q.pop();
         if(temp->left){
             q.push(temp->left);
         }
         if(temp->right){
             q.push(temp->right);
         }
    }
    return sum;
}