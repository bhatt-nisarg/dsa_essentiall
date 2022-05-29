//pass by reference
/*
in pass by reference if we pass value to the function and if it is pass by reference then the other function and the main function have same memory because other function has reference variable which is pointed to the same bucket

in pass by reference we have only one bucket and same memory the main diffrence between pass by value and pass by reference is that 

1) in pass by value we have second copy of the variable which are diffrent 
2) in pass by reference we have same variable and other function is just reference to the variable using reference variable
*/
#include<iostream>
using namespace std;

//Pass by reference using  reference variable
void ApplyTaxWithRef(int & money){
	float tax = 0.10;
	money = money - money*tax;
}
int main(){

	int income;
	cin>>income;

	ApplyTaxWithRef(income);

	cout<<income<<endl;
	return 0;
}