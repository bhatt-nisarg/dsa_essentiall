//Last Occurence 
/*
write a Function to find the last occurence of an element in an array
*/
#include<iostream>
using namespace std;
int Last_Occ(int arr[],int n,int k){
	//base case
	//if n==0 then it is null array
	if(n==0){
		return -1;
	}
	// recursive case
	int subIndex = Last_Occ(arr+1,n-1,k);
	if(subIndex==-1){
		if(arr[0]== k){
			return 0; 
		}else{
			return -1;
		}
	}else{
		return subIndex + 1;
	}
}
int main(){
	int arr[] = {1,2,3,4,5,3,4,5,3,4,5};
	int n = sizeof(arr)/sizeof(int);

	int key = 3;
	cout<<Last_Occ(arr,n,key);
}