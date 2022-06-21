//write a function to check whether the given array is sorted or not

/*for this first we have to learn concept of this in sorted arr is like arr[0]<arr[1] this is the base that we can make formula from this case that
if arr[0]<arr[1] and(&&) function(arr+1,n-1); 
in this arr+1 is said that array starting from +1 index from the given one*/

//let solve this problem in two ways 
//1 is we decrease size n-1 and start array from arr+1
// 2 is we give one index to the function which can start from the particular index and we need not to do n-1 
#include<iostream>
using namespace std;

bool check_array1(int arr[],int n){
	//base case : if n means array size is 0 or one means array have only one or zero value then it return true(Array is sorted)
	if(n==0 or n==1){
		return true;
	}
	//recursive case
	if(arr[0]<arr[1] && check_array1(arr+1,n-1)){
		//n-1 is decrease n by 1 
		//arr+1 means starting from index arr+1 
		return true;
	}
	return false;

}
bool check_array2(int arr[],int i,int n){
	//base case in base case we not use above condition because we not decrease array size instead of decreasing size we are using increasing index value 
	//we stop when our i is equal to last index of the array
	if(i==n-1){
		return true;
	}
	//recursion function
	//in this we give particular index there from starting
	if(arr[i]<arr[i+1] && check_array2(arr,i+1,n)){
		return true;
	}
	return false;

}
int main(){
	int arr[] = {1,2,3,4,5,3,2,1};
	int n = sizeof(arr)/sizeof(int);

	cout<<check_array1(arr,n)<<endl;
	cout<<check_array2(arr,0,n)<<endl;
	//in second line 0 is said that starting from index 0

}