#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int i=1;
		int ans;
		while(i<n){
			ans += i*x;
		}
		cout<<ans%(1000000007)<<endl;
	}
}