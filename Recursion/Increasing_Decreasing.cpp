//Understanding recursion direction
/*
for example we want to write a program which is print numbers from 1.......N recursively in
 decreasing order
 increasing order
*/ 
#include <iostream>
using namespace std;
void Decreasing(int n){
	if(n==0){
		return;
	}
	cout<<n<<" "; //it will print first n and then other recursion occur
	Decreasing(n-1);
}
void Increasing(int n){
	if(n==0){
		return;
	}
	Increasing(n-1);
	cout<<n<<" ";//it first recursion made in call stack and then after it will print n which is increment
}
int main(){
	int n;
	cin>>n;
	Decreasing(n);
	cout<<endl;
	Increasing(n);
} 