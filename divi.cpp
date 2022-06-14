#include<iostream>
using namespace std;
//perform permutation

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n-1];
		int restore=0;	
		for(int i=1;i<=n;i++){
			cin>>a[i-1];
			m = m-a[i-1];
			if(m==0 or a[i]>m){
					restore=a[i]-m;
				c	i++;
				}
				
		}
		
		cout<<restore<<endl;
	}
}