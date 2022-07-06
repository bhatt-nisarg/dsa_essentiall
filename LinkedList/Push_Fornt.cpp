//Push_Front in Linked List
#include<iostream>
using namespace std;

class Node{
	
public:
	int data;
	Node *next;
	Node(int d){
		this->data = d;
		this->next = NULL;
	}
};

class List{
	Node * head;
	Node * tail;
	public:
	List(){
		this->head = NULL;
		this->tail = NULL;
	}

	void push_front(int data){
		if(head==NULL){
			Node * n = new Node(data);
			head = tail =n;
		}
		else{
			Node *n = new Node(data);
			n->next = head;
			head = n;
		}
	}
	
};
int main(){

	List da;
	da.push_front(1);
	da.push_front(2);
	da.push_front(3);
	da.push_front(4);
	da.push_front(5);
}