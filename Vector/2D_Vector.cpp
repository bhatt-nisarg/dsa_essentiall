//2D vector
// 2d vector using stl function
#include<iostream>
#include<vector>
using namespace std;
int main(){
	//2D Vector
	vector<vector<int>> arr = {
		{1,2,3},
		{4,5,6},
		{7,8,9},
		{11,12}
	};
	//we can update the value inside vector using indexing
	arr[0][0] += 1;

	//printing all element inside an array
	for(int i =0;i<arr.size();i++){
		//here we use for each loop for traversing each row element
		for(int number : arr[i]){
			cout<< number<<" , ";
		}
		cout<<endl;
	}

	return 0;
}