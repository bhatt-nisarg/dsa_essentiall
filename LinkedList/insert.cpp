//insert element inbetween the linked list
#include<iostream>
using namespace std;

class Node{
	
public:
	int data;
	Node * next;

	Node(int d){
		this->data = d;
		this->next = NULL;
	}

	//it use to return data
	int getdata(){
		return data;
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
	//we  use Node* because Node * is data type of head
	Node * begin(){
		return head;
	}
	void push_front(int data){
		if(head==NULL){
			Node * n = new Node(data);
			head = tail=n;
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
			Node *n = new Node(data);
			tail->next = n;
			tail = n;
		}
	}
	void insert(int data,int position){
		if(position=0){
			push_front(data);
			
		}
		//otherwise
		//create one temporary node which help for finding position node
		Node * temp = head;
		for(int jump = 0;jump<=position-1;jump++){
			//reach till the point where we have to link
			temp = temp->next;
		}
		//create one node in which we have to data and we have to link it
		Node * n = new Node(data);
		//then first link tail part to the next node
		n->next = temp->next;
		//and  then connect n with front means position part
		temp->next = n;
		

	}
};

int main(){
	List l;
	l.push_front(1);
	l.push_front(0);
	l.push_back(3);
	l.push_back(4);
	l.insert(2,2);  //data = 2 position = after 2 node
	l.push_front(12);
	l.push_back(13);
	Node * head = l.begin();   //l.begin method return head
	while(head!=NULL){
		cout<<head->getdata()<<"=>";   //head->getdata() return data at  head node
		head = head->next;
	}
}