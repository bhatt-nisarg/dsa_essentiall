//stack header file
#include <iostream>
using namespace std;
//we are using linked list there are not any stack full operation for this
template<typename T>
//we make forward declaration for which we use in later
class Stack;

template<typename T>
class Node{
	public:
	T data;
	Node<T> *next;

	Node(T d){
		data = d;
	}
};

template<typename T>
class Stack{
	Node<T> * head;
	public:
	stack(){
	head = NULL;
	}

	void push(T data){
		Node<T> *n = new Node<T>(data);
		n->next = head;
		head = n;
	}
	bool empty(){
		return head==NULL;
	}
	//it return what is the data at top
	T top(){
		return head->data;
	}

	void pop(){
		if(head!=NULL){
			Node<T> *temp = head;
			head = head->next;
			delete temp;
		}
	}
};
