/*Factorial of a number 
in recursion it use extra space because of implicit call stack and 
for this factorial program time and space complexity is linear O(N)
*/

#include<iostream>
using namespace std;

int fact(int n){
	//base case
	if(n==0){
		return 1;
	}
	//recursive case
	int ans = n * fact(n-1);
	return ans;

}
int main(){
	int n;
	cin>>n;
	cout<<fact(n)<<endl;
}