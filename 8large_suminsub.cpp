//print the sum of each subarrays & find out the largest sum
//this method is bruteforce method to find the largest sum in the subarray
//O(n3) time complexiity
#include <iostream>
using namespace std;
int LargesuminSub(int arr[], int n){
	//large element for find large sum from the whole array
	int largest_sum = 0;
	
	for(int i = 0;i<n;i++){
		for(int j = i;j<n;j++){


			//find sum of current subarray
			int current_sum = 0;
			for(int k =i;k<=j;k++){
				current_sum += arr[k];
			}
			//it is check whether the current sum is larger than the largest sum or not
			//largest_sum = max(largest_sum,current_sum); it is short function for checking
			if (current_sum>largest_sum)
			{
				largest_sum=current_sum;
			}
		}
	}
	return largest_sum;

}




int main(){
	int arr[] = {-2,3,4,-1,5,-12,6,1,3};
	int n = sizeof(arr)/sizeof(int);
	cout << LargesuminSub(arr,n);
	return 0;
}