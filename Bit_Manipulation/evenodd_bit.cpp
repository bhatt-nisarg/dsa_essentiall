//write a function to check if a number is odd or even using bit manipulation

/*
Explanation: for check whether the bit  is  odd or even  we have to and the number with one
let  suppose we have number is 3 and is binary is given below

		0000101
	&	0000001	
	_____________
it give 0000100
if and operation last bit  is zero then we can say that
the given number is odd because in nummber if last bit is 1 and it  & operation with 1 is 0 that  means is is odd number
and if not then it is even number

*/

#include<iostream>
using namespace std;

int main(){
	int x;
	cin>>x;
	if(x&1){
		cout<<"odd";
	}
	else{
		cout<<"even";
	}
}