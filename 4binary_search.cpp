// Binary search : search  use in sorted array
/*Efficient searching algorithm to find the index of 
	element in a given sorted array*/
//lexicographicsorted order

//time complexity : O(log n)
/* it is -> fast & efficient
		-> search space should be sorted order or we can say that search space is monotonic means either increasing or decreasing order
monotonic : -> non-increasing order or non-decreasing order
*/

#include<iostream>
using namespace std;

int binary_search(int arr[],int n, int key){

	int start=0;
	int end=n-1;
	while(start<=end){
		int mid = (start+end)/2;
		if( arr[mid]==key){
			return mid;
		}
		else if(arr[mid] > key){
			end = mid-1;
		}
		else{
			start = mid + 1;
		}
	}
	return -1; //return -1 means key is not found


}


int main(){

	int arr[] = {10,11,12,13,14,15,16,17,18,19,20};
	int n = sizeof(arr)/sizeof(int);

	cout << "enter the key that you want to search : "<< endl;
	int key;
	cin>>key;
	int index = binary_search(arr,n,key);// store key in index variable 
	if(index != -1){
		cout<< key <<" is placed at index : "<<index<<endl;
	}
	else{
		cout<< key << " is NOT FOUND!"<<endl;
	}
	return 0 ;

}


