// Selection Sort    
/*

	Key idea : Repeatedly find the minimum element from unsorted part and putting it at the beginning

in selection sort we have to select one variable and we have to swap this with the minimum out of the array this is th whole idea about the selection sort

*/
#include<iostream>
using namespace std;

void Selection_Sort(int arr[],int n ){
	//first we have to run one loop for position 
	for(int position = 0;position<=n-2;position++){
		//now we have to take first element as largest and find the smallest from rest of the array
		// int current_large = arr[position];
		//this is for store the rest smallest position in the array
		int min_position = position;

		//this loop is to find the smallest and swap it with the first one
		for(int j = position;j<n;j++){

			if(arr[j]<arr[min_position])
				min_position = j;
		}
		int temp;
		temp = arr[min_position];
		arr[min_position] = arr[position];
		arr[position] = temp;
		//insted of using the temp variable we can use swap function
		// swap(arr[min_position],arr[position]);

	}
}

int main(){
	int arr[] = {-3,5,4,-1,-10,-11,7,8,9,10};
	int n = sizeof(arr)/sizeof(int);

	Selection_Sort(arr,n);

	for(int x:arr){
		cout<< x<< ",";
	}
}