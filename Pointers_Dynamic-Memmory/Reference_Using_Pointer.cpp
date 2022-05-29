//pass By Reference using pointers
/*
Lets take one example
we have one video and its intialized with some amount of views and we have to increment views for particular video then we make one void function and use pointer that point to particular variable

*/

#include<iostream>
using namespace std;
//here *viewPtr is a pointer variable
void watchVideo(int * viewPtr){

//watch video shoul increment view count by 1
	// here * is a pointer and
	// *viewPtr(pointer variable) = &views(address of variable) is related 

	// it is same as pointer is equal to address of views is same as viewptr is equal to valueof view

	*viewPtr = *viewPtr + 1;
	// here above *viewPtr is a reference variable which is same as 
	// views = views +1;

}

int main(){
	//initialized one variable views with 1000 view
	int views = 1000;

	//pass Address of views variable to the  function
	watchVideo(&views);
	//this is for pass address of variable
	cout<< views <<endl;
	return 0 ;
}



	
