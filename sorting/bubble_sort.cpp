/* this is about sorting algorithm

/*   ** the first sorting algorithm  


 bubble sort


 in bubble sort take input of unsorted array 
 	a={10,12,5,4,1,3,2}
	

	// sorted array in increasing order 
	a= {1,2,3,4,5,10,12}

	//sorted Array in decreasing order
	a={12,10,5,4,3,2,1}

*/
/*
key idea of bubble sort:
	--> Take larger element to the end by repeatedly swapping the adjacent elements
*/

//in bubble sort we have to go till n-1 index and we have to do repeated swaping of current element with next one
#include<iostream>
using namespace std;

void bubble_sort(int arr[],int n ){

	for(int times=1;times<=n-1;times++){
		//repeated swapping
			for(int j =0;j<=n-times-1;j++){

				if(arr[j]>arr[j+1])
				{
					// swap(arr[j],arr[j+1]);
					int temp;
					temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1]=temp;

				}
				
			}
	}
}

int main(){
	int arr[] = {10,12,5,4,1,3,2};
	int n = sizeof(arr)/sizeof(int);

	bubble_sort(arr,n);
	for(int x : arr){
		cout<<x<<",";
	}
}



