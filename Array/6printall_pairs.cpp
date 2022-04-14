//printing all pairs in the array
#include<iostream>
using namespace std;

//we solve this using 2 nested loops 
int printAllpairs(int arr[], int n){
	for (int i = 0; i < n; i++)
	{
		int first = arr[i];
		// j = 0 then it make pair with previous element also 
		// if j = i+1 means it make pair with next element
		for (int j = i+1; j < n; j++)
		{
			int second = arr[j];
			cout<< first << ","<< second<< endl;
		}
		cout<<endl;
	}

	return 0 ;
}
int main(){
	int arr[] = {10,20,30,40,50};
	int n = sizeof(arr)/sizeof(int);
	printAllpairs(arr,n);
	//another way to write for loop
	//in this x is variable which iterate in the array 
	/*for(int x : arr){

		cout << x << endl;
	}*/
	return 0;
}