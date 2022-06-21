//Modulo_Expentiation
//Problem:
/*
given three numbers x,y,and mod, compute x raised to power y modulo mod i.e. (x^y)%mod
Input Format
Three Integer x,y,and mod are passed.
Output Format
return an integer
Sample Input : X =12,y=25,mod = 10007
Sample Output : 9603

*/
//Expected time complexity : O(Log N)
//Hint : if a is even than x^a can be written as (x^(a/2)*(x^(a/2)))

#include<iostream>
using namespace std;

int main(){
	int x,y,p;
	x = 12;
	y = 25;
	p = 10007;
	int result = 1 ; //initialize result

	x = x%p;  //update x if it is more than or equal to p
	if(x==0) return 0;//In casse x is divisible by p;

	while(y>0){
		//if y is odd, multiply x with result
		if(y & 1)
			result = (result * x) % p;
		//y must be even now
		y = y>>1; //y = y/2	
		x = (x*x) % p;
	}
	cout<<result;
	
}