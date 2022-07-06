//Searching in the linked list
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
	Node * head;
	Node * tail;

	int SearchHelper(Node* head,int key){
		//base case
		if(head==NULL){
			return -1;
		}
		if(head->data==key){
			return 0;
		}
		//remaining part of the linked list
		int idx = SearchHelper(head->next,key);
		if(idx==-1){
			return -1;
		}
		return idx+1;
		
	}
public:	
	List(){
		this->head = NULL;
		this->tail = NULL;
	}

	Node* begin(){
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
		if(head ==NULL){
			push_front(data);
			return;
		}
		Node * temp = head;
		for(int place=0;place<position-1;place++){
			temp = temp->next;
		}
		Node * n = new Node(data);
		n->next = temp->next;
		temp->next = n;
	}
	int search(int key){
		Node * find = head;
		int index = 0;
		while(find!=NULL){
			if(find->data == key){
				return index;
			}
			index++;
			find = find->next;
		} 
		return -1;

	}
	int recursiveSearch(int key){
		int index = SearchHelper(head,key);
		return index;
	}

};

int main(){
	List l ;
	l.push_back(1);
	l.push_front(0);
	l.push_back(3);
	l.insert(2,2);

	Node * head = l.begin();
	while(head != NULL){
		cout<<head->getdata()<<"=>";
		head = head->next;
	}
	//recursive searching method
	int key;
	cin>>key;
	cout<<l.recursiveSearch(key)<<endl;

	//this method is linear searching
	/*
	cout<<endl;
	int keyfound = l.search(4);
	cout<<"Key is Found at Node: "<<keyfound<<endl;
	*/
}

