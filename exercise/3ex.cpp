/* Program to find lowerboud  
Lower Bound
Given an array of integers A(sorted) and a integer Val
Implement a function that takes A and Val as input parameters and returns the lower bound of val

Note: if val is not present in array then lower bound ofa given integer means integger which is just smaller than given integer.
Otherwise Val itself is the answer

if val is lessthan smalllest element of array A then return '-1' in that case

Example 1:
	A = [-1,-1,2,3,5]
	Val = 4
	Answer : 3
	Since 3 is just smaller than 4 in the array
Example 2:
	A = [1,2,3,4,6]
	Val = 4
	Answer: 4

	Since 4 is equal to 4	
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<int> arr={-1,-1,2,3,5};
	int val=4;
	int n = arr.size();
	int start = 0;
	int end = n-1;

	while(start<end){
		int mid = (start+end) /2;
		if(arr[mid]>=val){
			end = mid;
		}
		else{
			start = mid+1;
		}

	}

	cout << arr[start];
} 