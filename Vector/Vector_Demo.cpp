//Introduction  
/*
-Vectors are sequence containers representing arrays that can change in size.
-Just like arrays,vectors use contiguous storage locations for their elements, which means that their elements can also be accessed directly in O(1) time.
-But unlike arrays, their size can change dynamically,with their storage being handled automatically by the container.
*/
//vector demo

#include<iostream>
#include<vector>
using namespace std;

int main(){
	//Demo vector
	//vector<int> arr = {1,2,3,4,45};

	//Fill constructor
	vector<int> arr(10,7);

	//fill consturctor
	vector<int> visited(100,0);

	//pop_back
	arr.pop_back();

	//Push_back O(1)
	arr.push_back(19);

	//print all the elements 
	for(int i= 0;i<arr.size();i++){
		cout<<arr[i]<<endl;
	}

	//size of the vector(No of elements in vector)
	cout<<arr.size()<<endl;

	//capacity of the vector  (How many elements can stored inside vector)

	cout<<arr.capacity()<<endl;

	return 0 ;


}