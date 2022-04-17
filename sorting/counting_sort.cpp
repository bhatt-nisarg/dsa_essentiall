/*       
	Counting sort    -    in counting sort we have two array 
							one is for storing element
							and second is for storing that how many times particular element occur
							we have counting array element size is maximum element from the given array



							time complexity for this element is O(N+range)

							For Example we have an array like this   
							Input  - {1,5,1,2,4,6,5,4,3,7,2,4,6}
							Output - {1,1,2,2,3,4,4,4,5,5,6,6,7}
*/

#include<iostream>
#include<vector>
using namespace std;

void counting_sort(int a[],int n){
	//here we take -1 beacause we assume that we have positilve elements
	int largest_ele = -1;
	//first we have to find maximum element to create count array from this
	for(int i =0;i<n;i++){
		largest_ele = max(largest_ele,a[i]);
	}

	//now we have to create count array from the given array element

	//we take vector in this to take dynamic memory
	//Update the freq array 
	vector<int> freq(largest_ele+1,0);
	for(int i =0;i<n;i++){
		freq[a[i]]++;
	}

	//now we have to sort array from the count array index
	//put back the elements from freq into original array

	int j =0;;
	for(int i=0;i<=largest_ele;i++){
		while(freq[i]>0){
			a[j] = i;
			freq[i]--;
			j++;
		}
	}
}

int main(){
	int arr[]  = {1,5,1,2,4,6,5,4,3,7,2,4,6};
	int n = sizeof(arr)/sizeof(int);

	counting_sort(arr,n);
	for(int i =0;i<n;i++){
		cout<<arr[i]<<",";
	}
}
