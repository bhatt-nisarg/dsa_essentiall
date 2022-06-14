#include<iostream>
using namespace std;
int main(){

		int n,last,first;
		cin>>n;
		last=n%10;
		while(n>=10)
		{
			n=n/10;
			cout<<n<<endl;
		}
		first=n;
		cout<<last+first<<"\n";
}