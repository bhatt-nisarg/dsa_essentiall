//Push back function in linked list
#include<iostream>
using namespace std;


class Node{
public:
	int data;
	Node* next;
	Node(int d){
		this->data = d;
		this->next = NULL; 
	}
	int getdata(){
		return data;
	}
};
class List{
public:	
	Node * head;
	Node * tail;
	List(){
		this->head = NULL;
		this->tail = NULL;
	}
	Node * begin(){
		return head;
	}
	void push_front(int data){
		if(head==NULL){
			Node * n = new Node(data);
			head = tail =n;
		}
		else{
			Node * n = new Node(data);
			n->next = head;
			head = n;
		}
	}
	void push_back(int data){
		if(head==NULL){
			Node *n = new Node(data);
			head=tail=n;
		}
		else{
			Node *n = new Node(data);
			tail->next = n;
			tail = n;
		}
	}
};

int main(){
	List l;
	l.push_front(1);
	l.push_back(2);
	l.push_front(0);
	l.push_back(3);
	l.push_back(4);
	l.push_back(5);

	Node * head = l.begin();
	while(head!=NULL){
		cout<<head->getdata()<<"->";
		head = head->next;
	}
}