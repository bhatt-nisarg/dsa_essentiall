#include<iostream>
#include<string>
using namespace std;

int main(){
	int t,n,ctn=0;
	cin>>t;
	while(t--){
		string a,b;
		cin>>n;
		cin>>a;
		cin>>b;
		char arr[n];

		for(int i=1;i<=n;i++){
			if(a[i]!=b[i]){
				a[i] = b[i];
				ctn++;
				arr[i]=b[i]
			}
			
		}
		cout<<ctn;
	}
	return 0;
}