//merge sort 
/*
concept of mergesort
implementing mergesort to sort an array
Input Array : [10,5,2,0,7,6,4]
Sorted Array : [0,2,4,5,6,7,10]

Steps involved in mergesort

step 1 : Divide the array in two parts(start+end/2)
step 2 : sort left part and right part recursively
	mergesort(left) and mergesort(right)
	left part is (start to mid)
	right part is (mid+1 to end)

step 3 : merge both part(left and right part) in single array
we take two pointer ne is for left and one is for right and we do comparision and store in one temp array
*/
#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr,int s,int e){
	vector<int> temp;
	int i = s;
	int m = (s+e)/2;
	int j = m+1;
	//comparision between two parts
	while(i<=m and j<=e){
			if(arr[i]<=arr[j]){
			temp.push_back(arr[i]);
			i++;
			}else{
				temp.push_back(arr[j]);
				j++;
			}
	}
	// copy remaining elements from first array 
	while(i<=m){
		temp.push_back(arr[i++]);
	}
	//or copy remaining elements from second array	
	while(j<=e){
		temp.push_back(arr[j++]);
	}
	//copy back the element from temp to original array
	int k = 0;
	for(int index=s;index<=e;index++){
		arr[index] = temp[k++];
	}
	return;
}
void merge_sort(vector<int> &arr,int s,int e){
	//base case
	if(s>=e){
	return;
	}
	//recursive case
	int mid  = (s+e)/2;
	merge_sort(arr,s,mid);
	merge_sort(arr,mid+1,e);

	return merge(arr,s,e);

}
int main(){
	vector<int> arr ={10,5,2,0,7,6,4};
	int s = 0;
	int e = arr.size()-1;

	merge_sort(arr,s,e);
	for(int x:arr){
		cout<<x<<" ";
	}
}

