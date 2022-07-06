//reverse linked list
/*given a list write a function to reverse the linked list.
Input : 1=>2=>3=>4=>5
Output:5=>4=>3=>2=>1*/
#include <iostream>
using namespace std;
class Node{
	public:
	int data;
	Node* next;

	Node(int d){
		this->data = d;
		this->next =NULL;
	}

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
	Node * begin(){
		return head;
	}
	void push_front(int data){
		if(head == NULL){
			Node* n = new Node(data);
			head = tail = n;
		}
		else{
			Node * n = new Node(data);
			n->next = head;
			head = n;
		}
	}
	void reverse(){
		Node* prev = NULL;
		Node* current = head;
		Node* n ;

		/* we have some following step for reverse linked list
			1) save next node location in temp node
			2) make current next is located to previous
			3) make forward increment 1 change all pointer to +1 increment
			*/
		
		while(current!=NULL){
			//save the next node location
			n = current->next;
			//make link of current node with previous node
			//make the current arrow point  to previous
			current->next = prev;
			//forward 1 step all current and previous
			prev = current;
			current = n;

		}
		head = prev;
	}

};

int main(){
	List l;
	l.push_front(1);
	l.push_front(2);
	l.push_front(3);
	l.push_front(4);
	l.push_front(5);
	l.push_front(6);

	Node * t = l.begin();
	while(t!=NULL){
		cout<<t->getdata()<<"=>";
		t = t->next;
	}
	cout<<endl;
	l.reverse();
	Node * head = l.begin();
	while(head!=NULL){
		cout<<head->getdata()<<"=>";
		head = head->next;
	}
}