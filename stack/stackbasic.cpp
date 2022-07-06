//stack intro
//here we used both header file one is stack using vector and second is stack using linked list
#include <iostream>
// #include "stackLL.h"
#include "stackV.h"
using namespace std;

int main(){
	Stack<char> s;
	s.push('h');
	s.push('e');
	s.push('l');
	s.push('l');
	s.push('o');

	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
	}
}