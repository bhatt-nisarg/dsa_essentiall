//we reduce time complexity to find the largest subarray sum in the array using the prefix sum 
//time complexity of this approch is O(n^2)
#include<iostream>
using namespace std;

int LargreSuminSubaaray(int arr[], int n){

	int largest_sum = 0;
	//first we make prefix array which find the sum from the start 
	int prefix[n] = {0};
	prefix[0] = arr[0];
	
	for(int i = 1; i < n; i++)
	{
		//it is find the prefix sum from start to i index
		prefix[i] = prefix[i-1] + arr[i];
	}

	//to find larges subaaray sum in particular i and j we iterate in the array and subtract prefix[j] with prfix[i-1]
	for(int i = 0; i < n; i++)
	{
		
		for(int j = i; j < n; j++)
		{
			//it is find the current subarray sum using prefix subarray
			int current_sum = i>0 ? prefix[j] - prefix[i-1]: prefix[i];

			if(current_sum>largest_sum)
			{
				largest_sum = current_sum;
			}
		}
	}
	return largest_sum;
}

int main(){

	int arr[] = {-2,3,4,-1,5,-12,6,1,3};
	int n = sizeof(arr)/sizeof(int);

	cout<< LargreSuminSubaaray(arr,n)<<endl;

	return 0 ;

}