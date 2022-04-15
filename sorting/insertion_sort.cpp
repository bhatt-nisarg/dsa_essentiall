/*   insertion sort  */

/*

in insertion sort we have to sort an array just like playing cards

insertion sort is similar to playiing cards in our hands

insert the card in its correct position in a sorted part

we have array like 
 {-2,3,4,-1,5,-12,6,1,3}

 we have to sort this array using insertion sort
*/

#include<iostream>
using namespace std;

void intsertion_sort(int arr[],int n){

	for(int i = 1; i <= n-1; i++){
		//copy arr[i] value in current variable
		int current = arr[i];

		int previous = i-1;
		while(previous>=0 && arr[previous]>current){
			//make arr[previous +1] value is arr[previous]
			arr[previous+1] = arr[previous];

			//decrement previous  
			previous = previous-1;
			
		}
		//this execute if while loop is not satisfy
		arr[previous+1] =current;	

	}
}

int main(){
	int arr[]  = {-2,3,4,-1,5,-12,6,1,3};

	int n = sizeof(arr)/sizeof(int);
	intsertion_sort(arr,n);

	for(int x: arr){
		cout<<x<<",";
	}
}