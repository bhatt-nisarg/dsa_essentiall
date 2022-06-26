//Rotated Array Search(Rotated Search)  - Modified Binary Search algorithm
/*
write function that takes input an sorted array of distinct integers,which is rotated about a pivot point and finds the index of any given element.
Sample Input [7,9,10,1,2,3,4,5,6]
element = 4
Sample Output : 6

for this type of rotated search we have to apply modified binary search
steps for doing this is
for this type of problem best method is first make two part of the given input
case 1 if arr[s]<=a[mid] it is lies on line one
		here we have another two part
		if key is between a[start] and a[mid]
			then it goes to left part(start -> mid)
		else 
			goto right part	(mid+1 -> end)

case 2 if a[mid]<=a[e] it is lies on line two
		here we have also two case
		if key lies between arr[s] and arr[end]
			right (mid+1 -> end)
			left (start -> mid-1)
as we see that we have two cases and inside this cases we have other cases


*/

#include<iostream>
#include<vector>
using namespace std;
int rotated_search(vector<int> a,int key){
	int n = a.size();

	//Logic
	int start = 0;
	int end = n-1;

	while(start<=end){
		int mid = (start+end)/2;
		//if mid is our key element it is a best case
		if(a[mid]==key){
			return mid;
		}

		// other 2 cases are
		if(a[start]<=a[mid]){
			//left
				// here we have two cases
			if(key>=a[start] and key<=a[mid]){
				end = mid-1;
			}
			else{
				start = mid+1;
			}
		}
		else{
			//right
			if(key>=mid+1 and key<=end){
				start = mid+1;
			}
			else{
				end = mid-1;
			}

		}

	}
	return -1;
}
int main(){
	vector<int> a{4,5,6,7,0,1,2,3};
	int key;
	cin>>key;
	cout<<rotated_search(a,key)<<endl;
	return 0;

}