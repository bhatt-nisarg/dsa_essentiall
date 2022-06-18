#include<iostream>
using namespace std;

int main(){
	int n,m,a;
	int count=0;
	cin>>n>>m>>a;
	int i = n;
	int j=m;

	while(i*a>=n and j*a>=m){
		count++;
		i--;
		j--;
	}
	cout<<count<<endl;

}