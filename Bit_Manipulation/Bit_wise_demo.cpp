//bit wise operator  
#include<iostream>
using namespace std;

int main(){
	int a = 5;
	int b = 4;
	int x = 0;


	cout<<(a&b)<<endl;
	cout<<(a|b)<<endl;
	cout<<(a^b)<<endl;
	cout<<(~x)<<endl;
}


//for right shift '>>' and left shift '<<' operator 
/*
we can say that if a << b it means 
	a << b =  a * (2 is in the power(b))
if a>>b then 
a>>b = a/(2 is in the power of (b))
*/
