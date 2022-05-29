//Introduction of 2D array

//work with 2D array

#include<iostream>
using  namespace std;

//when we are passing 2d array to function must pass the size of column you can ignored pass the size of row
//this function call is passed by reference

void print(int arr[][100],int n ,int m ){

	//print 2d array
	for(int i =0;i<n;i++){
		for(int j =0;j<m;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}

}
int main(){

	int arr[100][100];
	//n rows and m columns

	int n,m;
	cin>>n>>m;

	//take input
	for(int i =0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	print(arr,n,m);
	return 0 ;
}