//Backtracking Array code
// backtracking means you moving form base case toward main function
#include<iostream>
using namespace std;

void printArray(int *arr,int n){
	//print our array
	for(int i=0;i<n;i++){
			cout<<arr[i]<<" ";
	}
	cout<<endl;
}
//in this array is common for all function call
//shared across all function calls
void fillArray(int *arr,int i,int n,int val){
	//base case
	if(i==n){
		//print our array
		printArray(arr,n);
		return;
	}
	//rec case
	arr[i] = val;
	fillArray(arr,i+1,n,val+1);
	//backtracking  step
	//always remember that bracktracking code is always after the function call
	
	arr[i] = -1*arr[i];

}
int main(){
	int arr[100];
	int n;
	fillArray(arr,0,n,1);
	printArray(arr,n);
	return 0;
}