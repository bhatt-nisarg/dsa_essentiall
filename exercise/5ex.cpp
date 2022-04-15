/*   this program is for k rotate arr in clockwies*/

// K ROTATE

/*
	Given an integer vector and value k, your task is to rotate the array k times clockwise
	
	Input Format : in the function an integer vector and number k is passed.

	Output Format : Return an integer vector

	Sample Input : {1,3,5,7,9}, x=2
	Sample Output : {7,9,1,3,5}

	Explanation : After 1st rotation - {9,1,3,5,7}	
				  After 2nd rotation - {7,9,1,3,5}

*/

#include<bits/stdc++.h>
using namespace std;

void  revers(int s,int e,int arr[]){
	while(s<e){
		swap(arr[s],arr[e]);
		s++;
		e--;

	}
	
}

int main(){
	int arr[100];
	int n;
	
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int k;
	cin>>k;
	k = k%n;

	revers(0,n-k-1,arr);
	revers(n-k,n-1,arr);
	revers(0,n-1,arr);

	for(int i =0;i<n;i++){
		cout<<arr[i]<< ",";
	}

}