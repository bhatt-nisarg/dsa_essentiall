//Dynamic Memory Allocation(DMA)
/*
dynamic memory is use for runtime memory allocation and it is a huge memory inside heap memory

when end of the function static memory is deleted automatically but dynamic memory is remain. if we want to delete  dynamic memory then we have to use command delete for delete particular things


//how to create dynamic array

int * arr = new int[n];

//in this n is given by user at runtime


//if we want to change  the vlue or access value
arr[i] = value;

//for delete we can use
delete [] arr;


//create dynamic integer  
int * x = new int;
//put value inside integer
*x = 10;

delete [] x ;

stack memory is in the hand of compiler(it deleted by compiler when the function call is end)
and heap memory is in the hand of programmer(we have to give command to deltet memory)

otherwise it  all automatically deleted when the program is end



what is memory leak?
for example you have one function and that funtion you have one dynamic array 
and at the end you return x[n] last value of array  and you dont have any pointer to point particular memory then it cause memory leak.

*/
//demo of working with dynamic array  

#include<iostream>
using namespace std;

int main(){
	int n ;
	cin>>n;

	//Dynamic Array
	int *arr = new int[n];    //we created one dynamic array

	cout<<arr<<endl;
	for(int i=0;i<n;i++){
		arr[i] = i ;
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	//delete
	delete [] arr;   //this will delete array which is in the heap memory

	cout<<arr<<endl;
	cout<<arr[0]<<endl;
	return 0 ;
}
