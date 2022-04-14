//vector demo 
#include <iostream>
#include<vector>
using namespace std;


int main(){

	//Demo vector
	vector<int> arr = {1,2,3,4,5};

	//fill constructor 
	// vector<int> arr(10,7);

	//fill Constructor
	vector<int> visited(100,0);

	//pop_back
	arr.pop_back(); 
	//Push_back O(1)
	arr.push_back(16);


	//size of the vector (No  of element)
	cout<<arr.size()<<endl;

	//capacity of the vector
	cout << arr.capacity()<<endl;

	return 0 ;

}