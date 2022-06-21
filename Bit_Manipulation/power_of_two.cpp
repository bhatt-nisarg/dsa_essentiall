//how to check whether the number is power of 2 or not
/*
Lets take one example of 16 lest say 16 is power of two or not
n = 16 binary number is 		10000
n-1 = 15 binary number is   	01111
							& ________
								00000
and we perform and operation of both and we have result is zero means it is power of 2 otherwise it is not the power of two
*/
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	if((n & (n-1))==0){
		cout<<" Yes! it is Power of 2 "<<endl;
	}
	else{
		cout<<" No! it is not power of 2 "<<endl;
	}
}