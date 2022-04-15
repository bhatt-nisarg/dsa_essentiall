//  program for 
/**** Sorted pair sum  */

/*
	
	Given a sorted array and a number x,find a pair in array whose sum is closest to x
    
    Input : in the function an  integer vector and number x is passed 

    Output : Return a pair of integers.

    Sample Input : {10,22,28,29,30,40}
    				x = 54
    Sample Output : 22 and 30				

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int difference = INT_MAX;
	vector<int> arr = {10,22,28,29,30,40};
	int x = 54;
	int n = arr.size();
	int start = 0 ;
	int endvector = n-1;
	int first,second;

	while(start<endvector){
		if(abs(arr[start]+arr[endvector]-x)<difference){
			first = start;
			second = endvector;

			difference = abs(arr[start]+arr[endvector]-x);	
		}
		if(arr[start]+arr[endvector]>x){
			endvector--;
		}
		else{
			start++;
		}
	}
	cout << arr[first] << " and " << arr[second];
}