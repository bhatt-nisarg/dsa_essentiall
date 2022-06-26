//Power Function
#include<iostream>
using namespace std;
//for this method we have space  complexity is O(n)
//and time complexity is O(n) it is  not optimal way
int power(int a, int n){
	//base case
	if(n==0){
		return 1;
	}
	//recursive case
	return a * power(a,n-1);
}

//effective method for doing this is in O(log n) time and space
/*
if we want a^n  = square(a^N/2)     if N is even
				  a * square(a^N/2) if N is odd
*/	  
int Speed_power(int a,int n){
	//base case
	if(n==0){
		return 1;
	}
	int sub_problem = Speed_power(a,n/2);
	int subSq = sub_problem * sub_problem;
	if(n&1){
		return a*subSq;
	}
	return subSq;
}
int main(){
	int a,n;
	cin>>a>>n;
	cout<<power(a,n)<<endl;
	cout<<Speed_power(a,n)<<endl;
	return 0;
}