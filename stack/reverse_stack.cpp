//Challenge : Reverse the stack(Recursively)
#include<iostream>
#include<stack>
using namespace std;

void InsertatBottom(stack<int> &s,int data){
	//base case
	if(s.empty()){
		s.push(data);
		return;
	}
	//recursive case
	int temp = s.top();
	s.pop();
	InsertatBottom(s,data);
	s.push(temp);
}
void reverse(stack<int> &s){
	if(s.empty()){
		return;
	}
	int data = s.top();
	s.pop();
	reverse(s);
	InsertatBottom(s,data);

}
int main(){
	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	reverse(s);
	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
	}
}