//Fast exponantioal
/*
for example we have 3 expo 5  we can do this using simple linear method 
	like 3 * 3 * 3 * 3 * 3
	it is take order(n) time
but we can do it is in more faster way 

we have to do 3 power 5 then first take 5 binary number which is 

 1        0 1   then starting from right square of  previous
a*a*a*a	a*a a

if it is 0 then skip it and if it is one then multiplly with result

	3 power 5 = 3 power 4 * 3 power 1
*/

//this faster exponantial take O(log n) time for computation
#include<iostream>
using namespace std;
int Fast_Exponantial(int a,int n){
	int ans = 1;
	while(n>0){
		int last_bit = n&1;
		if(last_bit){
			ans  *= a; 
		}
		a = a * a;
		n = n>>1;
	}
	return ans;
}
int main(){
	int a,n;
	cin>>a>>n;
	cout<<Fast_Exponantial(a,n)<<endl;
	return 0;
}