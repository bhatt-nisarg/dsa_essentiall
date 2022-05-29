//Pass by Value 
/* 
if we pass by value using variable  then it i copy the value of particular variable and changed made in this variable
in pass by value it makes another bucket for copy the value of pass variable

*/
#include<iostream>
using namespace std;

void ApplyTax(int income){
//in this income is passed  by value which is create one copy of variable and made operation  in this bucket
	float tax = 0.1;
	income = income - income*tax;
	//here income is 90 but it not affect in main
}
int main(){

	int income;
	cin>>income;
	//give 100 as input
	//it is one variable bucket
	ApplyTax(income);
	//this is totally diffrent bucket which is not modify
	cout<<income<<endl;
	//output is 100

}