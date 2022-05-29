//Pointers : A pointers is a variable that holds the address of another variable

/*
To declare a pointer, we use an asterisk(*) between the data type and the vriable name.

Some declaration
int *pnPtr;   //a pointer ti an integer
double *pdPtr; //a pointer to a double variable
int* pnPtr*; // also valid syntax
int * pnPtr3; //also valid syntax
*/


#include<iostream>
using namespace std;

int main(){
	int x= 10;
	float y  = 5.5;
	cout<< &x <<endl;

	//cout<<&y<<endl;

	//Demo Pointer

	int *xptr = &x;
	
	cout<<xptr<<endl;

	//Address of a pointer variable
	cout<<&xptr<<endl;

	//Pointer to a pointer
	int ** xxptr = &xptr;
	cout<<xxptr<<endl;

	return 0; 

}