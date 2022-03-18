//ex -1 find largest element in the given array
// it is in the linear time therefore the time complexity is O(n)
#include<iostream>
#include<vector>
using namespace std;
int main(){
	
	vector<int> arr = {-3,4,1,2,3,-1,-2,-3,-3,8};

	int max = arr[0];
	for (int i = 1; i < arr.size(); i++)
	{
		if(max < arr[i]){
			max = arr[i];
		}
	}
	cout<< max;
	
}

