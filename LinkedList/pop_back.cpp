//Pop_front, pop_back,remove node at given position
/*

Pop_front:
steps : 1 copy head in temp memory(temp=head)
		2 head = head->next
		3 temp->next = NULL
		4 delete temp

Pop_back :
steps :


remove(pos):
	n = temp->next
	temp->next = n->next
	n->next = NULL
	delete n;
			
*/ 
#include<iostream>
using namespace std;

class Node{
public:
	int  data;
	Node * next;

	//constructor
	Node(int d){
		this->data = d;
		this->next = NULL;
	}
	int getdata(){
		return data;
	}
	~Node(){
		if(next!=NULL){
			delete next;
		}
		cout<<"deleted data "<<data<<endl;
	}
};
class List{
	Node * head;
	Node * tail;
public:
	Node* begin(){
		return head;
	}
	List(){
		this->head = NULL;
		this->tail = NULL;
	}
	void push_front(int data){
		if(head == NULL){
			Node * n = new Node(data);
			head= tail=n;
		}
		else{
			Node * n = new Node(data);
			n->next = head;
			head = n;
		}
	}
	void push_back(int data){
		if(head==NULL){
			Node * n = new Node(data);
			head = tail = n;
		}
		else{
			Node * n = new Node(data);
			tail->next = n;
			tail = n;
		}
	}
	void insert(int data,int pos){
		if(pos==0){
			push_front(data);
			return;
		}
		//save head int temp node
		Node * temp = head;
		// point temp to position-1 index
		for(int jump=0;jump<pos-1;jump++){
			//go temp till position -1
			temp = temp->next;
		}
		//create new node to insert in the linked list
		Node *n = new Node(data);
		temp->next = n->next;
		temp->next = n;
	}
	void pop_front(){
		Node * temp = head;
		head = head->next;
		temp->next = NULL;
		delete temp;
	}
	void pop_back(){
		Node * temp=head;
		Node * n =tail;
		while(temp->next->next!=NULL){
			temp = temp->next;
		}
		temp->next=NULL;

		delete tail;
		cout<<"deleted!:"<<endl;
	}
	void remove(int pos){
		Node * temp = head;
		for(int remop = 0;remop<pos-1;remop++){
			temp = temp->next;
		}
		Node * n = temp->next;
		temp->next = n->next;
		n->next = NULL;
		delete n;
	}
	~List(){
		if(head!=NULL){
			delete head;
			head = NULL; 
		}
	}

};

int main(){
	List l;
	l.push_back(5);
	l.push_front(4);
	l.push_front(2);
	l.push_front(1);
	l.push_front(0);
	// l.pop_front();
	Node * head = l.begin();
	while(head!=NULL){
		cout<<head->getdata()<<"=>";
		head = head->next;
	}
	// l.pop_back();
	l.remove(4); 
	 //here two is position
	// Node * head = l.begin();
	Node * h = l.begin();
	while(h!=NULL){
		cout<<h->getdata()<<"=>";
		h = h->next;
	}
	cout<<endl;
}