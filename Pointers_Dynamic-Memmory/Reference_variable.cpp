//Reference Variables(&) : it is allow us to passs object by reference

/*
for passobject by reference we have 2 ways
	1) using pointers
	2) using reference variables

'&' is used in 3 ways  
	1) use for &(and) operation(bitwise and)
	2) & bucket (use for address of operator)
	3) use for initializing reference variable

if we use 
	int x = 10;
	int y = x;
	it will create two bucket of value 10 one is for x and one is for  y
but using reference variable we can use 
	int x = 10;
	int &y = x;
	it is only one bucket of 10 which is pointed by x and y both 
	if we increment any of one then it will change for both 
*****reference variable must be initialized
we can't put int &y beacause at the same time we must have to initialize reference variable this will give error for not initialize reference variable	

*/

#include<iostream>
using namespace std;


int main(){
	int x = 10;
	int &y = x;

	//we change one variable value it effect in both
	y++;
	x++;
	cout<<x<<endl;
	cout<<y<<endl;
	return 0;
}