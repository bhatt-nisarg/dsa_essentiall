//deletion of linked list
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

	//for node we use destructor to delete next
	~Node(){
		if(next != NULL){
			// delete next is one kind of recursive funtion which delete next node of the data
			delete next;
			
		}
		cout<<"deleting data "<<data<<endl;
	}


};
class List{
	Node * head;
	Node * tail;
public:
	List(){
		this->head=NULL;
		this->tail =NULL;
	}
	Node * begin(){
	return head;
	}

	void push_front(int data){
		if(head==NULL){
			Node * n = new Node(data);
			head=tail = n;
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
	void insert(int data,int position){
		if(position==0){
			push_front(data);
			return;
		}
		Node * temp = head;
		for(int jump=0;jump<position-1;jump++){
			temp = temp->next;
		}
		Node * n = new Node(data);
		n->next = temp->next;
		temp->next = n;
	}

	//we use constructor fordeletion of of node
	~List(){
		while(head!=NULL){
			delete head;
			head = NULL;
		}
	}
};

int main(){
	List l;
	l.push_front(1);
	l.push_back(3);
	l.insert(0,0);
	l.insert(2,2);

	Node * head = l.begin();
	while(head!=NULL){
		cout<<head->getdata()<<"=>";
		head = head->next;
	}

}