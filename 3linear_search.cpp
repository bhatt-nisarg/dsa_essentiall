// searching in array 
/*Linear search  : Searching algorithm to find the index of element in a given array*/

#include<iostream>
using namespace std;

int linear_search(int arr[],int n , int key){

	//iterating in array from 1 to n 
	for(int i =0;i<n;i++){
		//check if current element matches with the key
		if(arr[i]==key){
			return i;
		}
	}
	//out of the loop that means key not found
	return -1;
}
int main(){
	int arr[] = {10,25,12,24,35,45,64,100};
	int n = sizeof(arr)/sizeof(int);
	cout <<"enter the key that you want to find:"<<endl;
	//take key what we have to find
	int key;
	cin>>key;

	//make index variable for storing position
	int index = linear_search(arr,n,key);

	if(index!=-1){
		//then the key is found
		cout << key<<" is present at index " << index << endl;	
	}
	else{
		//key is not in the list
		cout << key << "is NOT FOUND!"<<endl;
	}
	return 0;
}
	
