//Problem:->reverse all the element in the given array
//time complexity O(n)
//space complexity O(1)
#include<iostream>
using namespace std;


int reverse_array(int arr[],int n){

	int start = 0;
	int end = n-1;
	while(start<end){
		//swap Logic
		int temp;
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		//increment start index and decrement end index
		start += 1;
		end -= 1;
	}
	return 0;
}
int main(){

	int arr[] = {10, 20, 30, 50, 60, 35, 25, 30};
	int n = sizeof(arr)/sizeof(int);//calculate element in array
	//print array before swap
	for (int i = 0; i< n; i++)
	{
		cout<< arr[i] << " ";
	}
	reverse_array(arr,n);
	cout<<endl;
	//print array after swap
	for (int i = 0; i< n; i++)
	{
		cout<< arr[i] << " ";
	}
	
	return 0;

}