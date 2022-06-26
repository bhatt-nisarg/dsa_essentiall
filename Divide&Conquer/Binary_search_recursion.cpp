//Binary_Search using recursion
/*
given a sorted array, return the index of an element x in the array. use binary searrch to find the element in the array!
return -1 if the element is not present.

Input Format 
In the function an integer vector is passed.
Output Format
Return an integer denoting index of the element to be find.
Sample Input : {1,3,5,7,9}, x=3
Sample Output: 1
Explanation 3 is present at  index 1.
*/
// #include<iostream>
// #include<vector>
// using namespace std;

// int bin_search(vector<int> ab,int s,int e,int key){
// 	int mid;
// 	//base case
// 	if(ab[mid]==key){
// 		return mid;
// 	}
// 	mid  = (s+e)/2;
// 	if(ab[mid]>key){
// 		bin_search(ab,s,mid-1,key);
// 	}else{
// 		bin_search(ab,mid+1,e,key);
// 	}

// 	//otherwise return -1
// 	return -1;
// }


// int main(){
// 	vector<int> v  ={1,3,5,7,9};
// 	int x = 3;
// 	int s = 0;
// 	int e = v.size();
// 	int res = bin_search(v,s,e,x);
// 	cout<<res<<endl;

// }













//other approach
//Expected Time Complexity: O(logn)
  
#include <bits/stdc++.h>
using namespace std;
  
// A recursive binary search function. It returns
// location of x in given array arr[l..r] is present,
// otherwise -1
int binary(vector<int> arr, int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
  
        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;
  
        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binary(arr, l, mid - 1, x);
  
        // Else the element can only be present
        // in right subarray
        return binary(arr, mid + 1, r, x);
    }
  
    // We reach here when element is not
    // present in array
    return -1;
}

int binarySearch(vector<int> v, int x)
{
    // your code goes here
    
    int n = v.size();
    int result = binary(v, 0, n - 1, x);
    return result;
}

 int main(){
	vector<int> v  ={1,3,5,7,9};
	int x = 4;
	int res = binarySearch(v,x);
	cout<<res<<endl;
}