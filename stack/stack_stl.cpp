//stack using stl function
#include<iostream>
#include<stack>
using namespace std;

int main(){
	stack<string> s;
	s.push("c++");
	s.push("java");
	s.push("python");
	s.push("os");

	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
	}
	return 0;
}