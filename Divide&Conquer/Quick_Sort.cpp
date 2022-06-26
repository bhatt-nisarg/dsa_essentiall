//Quick_sort
/* 
it is an divide and conquer algorithm
concept of quicksort
implementing quicksort to sort an array

Input array : [10,5,2,0,7,6,4]
Output array : [0,2,4,5,6,7,10]

average time complexity O(NlogN)
worst case time complexity O(N^2)

steps for quick sort

1 - choose a pivot  element(always choose last element as pivot)
2 - most important part is partition
3 - Recursively sort all element
base case : if array have only 0 or 1 element then return.


second step
how to partition of array(As per CLRS book)

*/
#include<iostream>
#include <vector>
using namespace std;

int partition(vector<int> &v,int s,int e){
	int pivot = v[e];
	int i = s-1;

	for(int j=s;j<e;j++){
		if(v[j]<pivot){
			i++;
			swap(v[i],v[j]);
		}
	}
	swap(v[i+1],v[e]);
	return i+1;
}
void QuickSort_recur(vector<int> &v,int s,int e){
	//base case
	if(s>=e){
		return;
	}
	//recursion case
	int p = partition(v,s,e);
	QuickSort_recur(v,s,p-1);
	QuickSort_recur(v,p+1,e);

}
int main(){
	vector<int> arr = {10,5,2,0,7,6,4};
	int n = arr.size()-1;
	QuickSort_recur(arr,0,n);

	for(int x:arr){
		cout<<x<<" ";
	}
	return 0;
}

