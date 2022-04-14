//printing subarrays for the given array

#include<iostream>
using namespace std;

int printSubArrays(int arr[], int n ){

	//we have to use 3 loop in this 2 loops for finding the subarray start and end and the third loop for print array from start to end
	for (int start = 0; start < n; start++)
	{
		//end = start means every time it start from start to the n
		for (int end = start; end< n; end++)
		{
			for(int printsub= start;printsub<=end;printsub++){
				cout<< arr[printsub]<< ",";
			}
			cout<< endl;
		}
		cout<<endl;
	}
	return 0;
}

int main(){
	int arr[] = {10,20,30,40,50};
	int n = sizeof(arr)/sizeof(int);
	printSubArrays(arr,n);
	return 0 ;
}