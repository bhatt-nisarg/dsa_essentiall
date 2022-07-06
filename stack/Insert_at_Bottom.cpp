//challenge : insert at stack bottom
#include<iostream>
#include<stack>
using namespace std;

void Pushb(stack<int> & s,int data){
	//base case
	if(!s.empty()){
		s.push(data);
	}
	//otherwise we store data in temp and pop data recursively
	int temp = s.top();
	s.pop();
	
	Pushb(s,data);

	//here after hitting base case we push all other element which is in temp vaiable
	s.push(temp);

}
int main(){
	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);

	//we have to push 5 at the bottom of the stack
	Pushb(s,5);
	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
	}

}