//exerecise of printing increasing numbers
/*
Givne an integer N. Your task is to return an integer vector containing numbers from 1 to N in increasing order
Sample Input
5
Sample Output
1 2 3 4 5
*/
#include<iostream>
#include<vector>
using namespace std;
vector<int> increas;
void increasing_order(int n){
	if(n==0){
		return ;
	}
	increasing_order(n-1);
	increas.push_back(n);
	return;
}
int main(){
	int n;
	cin>>n;
	increasing_order(n);
	for(int x : increas){
		cout<<x<<" ";
	}
}