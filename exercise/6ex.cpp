/*   in this exercise we input a vector and one input flag 

	if flag is 1 then sort array in ascending order otherwise sort in decsending order

	sort with comparator function

*/

/*
	Sorting with Comparator
	
	Given an integer vector and bool variable flag, your task is to sort the vector in accordance to the boolean value. if the bool value is true then sort it in non-decreasing order or vice versa.
	you can use any sorting technique of your choice.

	Input format : 
		in the function an integer vector and a boolean is passed.

	Output Format:
		Return an integer vector

	Sample Input
		
		{111,33,5,7,29},flage =1
	Sample Output
		{5,7,29,111}				
*/

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;


bool compare(int a,int b){
	return a<b;
}

int main(){
	vector<int> arr = {1,3,2,1,4,6,3,2,5,8,4,0,1,3,4,2,1,4,6,7,9,7,4,5,3,2,4,6,2,0,-1,-2,-100,-200};

	int flag;
	cin>>flag;

	if(flag==1){
		sort(arr.begin(),arr.end(),greater<int>());
	}
	else{
		sort(arr.begin(),arr.end(),compare);
	}

	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<",";
	}
}