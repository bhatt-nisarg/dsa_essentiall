//write a function to find the first occurence of an element in an array!
//its kind of linear search for finding first occurence of the elment in array using reursion
#include<iostream>
using namespace std;

// First Mehtood
//we not use anyindex variable we just increment array +1
int firstOcc(int arr[],int n,int key){
	//base case
	if(n==0){
		return -1;
	}
	//recursive case
	if(arr[0]==key){
		return 0;
	}
	int subIndex = firstOcc(arr+1,n-1,key);
	if(subIndex !=-1){
		return subIndex+1;
	}
	return -1;
}

//Second Method
//this function is use index i for traversing in the array
// int First_occurence(int arr[],int n,int element,int i){
// 	if(i>n){
// 		return -1;
// 	}
// 	if(arr[i]==element){
// 		return i;
// 	}
// 	return First_occurence(arr,n,element,i+1);
// } 
int main(){
	int arr[] = {1,2,3,4,5,6,4,5,6,4,3,2,34,65};
	int n = sizeof(arr)/sizeof(int);

	int element;
	cin>>element;
	// cout<<First_occurence(arr,n,element,0);
	cout<<firstOcc(arr,n,element);
}
