//bubble sort using recursion
//it is not efficient method for bubble sort you can see that loops are easy for this
//but we try for practice of recursion
#include<iostream>
using namespace std;
void Bubble_sort_useLoop(int arr[],int n){
	int i,j;
	for(int i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}

	}
	return;
	
}
void bubble_using_recursion(int arr[],int n){
	//base case
	if(n==1){
		return;
	}
	for(int j=0;j<n-1;j++){
		if(arr[j]>arr[j+1]){
		int t = arr[j];
		arr[j]  = arr[j+1];
		arr[j+1] = t;
	}
	}
	bubble_using_recursion(arr,n-1);
}
void bubble_all_recursion(int arr[],int n,int j){
	//base case
	if(n==1){
		return;
	}
	if(j==n-1){
		//reduce problem size n-1 and reset j to 0
		bubble_all_recursion(arr,n-1,0);
		return;
	}
	if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			} 
	bubble_all_recursion(arr,n,j+1);
}

int main(){
	int arr[] = {1,0,-1,2,-2,3,-3,4,-4};
	int n = sizeof(arr)/sizeof(int);

	// Bubble_sort_useLoop(arr,n);
	// bubble_using_recursion(arr,n);
	bubble_all_recursion(arr,n,0);
	for(int x:arr){
		cout<<x<<" ";
	}
}