//Delete tail exercise solution
/*
Given a pointer to the root of the linedlist, your task is to delete the tail of the linklist and return the head of the updated liist.
Input :
1->2->3->4->5->6->7->8
Output : 
1->2->3->4->5->6->7
*/
#include<bits/stdc++.h>
using namespace std;


class node{
public:
	int data;
	node* next;

	node(int data){
		this->data = data;
		next = NULL;
	}
};

node* deleteTail(node * head){
    //Complete this function 
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    node * temp = head;
    while(temp->next->next!=NULL){
        temp = temp->next;
    }
    node * n = temp->next;
    delete n;
    temp->next = NULL;
   
    return head;
}

