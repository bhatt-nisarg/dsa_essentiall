/*Fibonacci series using recursion function
for time ans space complexity we can use recursion tree
for this example the time coomplexity is O(2^N) 
and Space complexity of this is O(N)
*/
#include<iostream>
using namespace std;
int fib(int n){
	if(n==0 or n==1){
		return n;
	}
	int f1 = fib(n-1);
	int f2 = fib(n-2);
	return f1+f2;
}
int main(){
	int n;
	cin>>n;
	// for(int i=0;i<n;i++){
	// cout<<fib(i)<<" ";
	// }
	cout<<fib(n)<<endl;
}