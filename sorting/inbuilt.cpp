// inbuilt sort & Comparators

/*
intbuilt sort is a function which is already in language we have to just include in the program 
here In c++ we have function called "algorithm" which gives inbuilt functionality 

and comparator is one function that we make to compare two value
*/

/*
in this program we learned about 
1) sort
2) comparator
3) reverse function
4) greater function
*/
#include<iostream>
//this header file is use for use inbuilt sorting functionality
#include<algorithm>
using namespace std;


//this compare function is compare the function
//this function call multiple times by the inbuilt sort function we can see that via the cout function

bool compare(int a,int b){
	// cout<<"Comparing "<<a<<" and "<<b<<endl;
	return a<b;
	//same as
	//return a>b;
}
int main(){
	int arr[] = {10,9,8,6,7,5,4,3,2,1,15,25,46};
	int n = sizeof(arr)/sizeof(n);

	//this is sort function which is use for sorting through inbuilt functionality and
	//first argument is arr which is start point second argument is end of the array "arr+n" 
	//and here compare is not a function call in function call we put '()' at the end  here is not a function call 
	//here we are passing a function as parameter to another function
	sort(arr,arr+n,compare);

	//intstead of writing the compare function we have inbuilt comparatore called greater function
	//we can write like this
	// sort(arr,arr+n, greater<int>()); 

	//reverse(arr,arr+n);

	//print the output
	for(int x: arr){
		cout<<x<<" ";
	}

}