//we can use the kadan's algorithm for finding maximum subarray sum in the array 
//it is take linear time to find the largest sum in the array 
//time complexity O(n) and space complexity O(1)
// Algorithm:
// Initialize : 
// 	max_so_far = INT_MIN;
// 	max_ending_here = 0;

// Loop for each element of the array
// a) max_ending_here = max_ending_here+1
// b) if(max_so_far < max_ending_here)
// 		max_so_far = max_ending_here
// c) if(max_ending_here<0)
// 		max_ending_here = 0
// return max_so_far					


#include<iostream>
using namespace std;

int largesumKadanes(int arr[], int n ){
	int current = 0; // current sum 
	int largest = 0; // largest sum of subarray
	for(int i = 0; i < n; i++)
	{
		current = current + arr[i];
		if(current<0){
			current = 0;
		}
		if (current>largest)
		{
			largest = current;
		}
	}
	return largest;
}

int main(){

	int arr[] = {-2,3,4,-1,5,-12,6,1,3};
	int n = sizeof(arr)/sizeof(int);

	cout<< largesumKadanes(arr,n)<<endl;

	return 0 ;
}