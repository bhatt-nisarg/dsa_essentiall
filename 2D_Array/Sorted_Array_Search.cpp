//  Sorted Array Search  **Practice Problem //
/*
Description : write a function that searches for an element in row wise and column wise sorted 2D Array
this algorithm is also called staircase search
*/

#include<iostream>
using namespace std;

pair<int,int> Array_search(int arr[][4],int row,int col,int k){
		
	//if the element is not present in the matrix then we return -1
	if(k < arr[0][0] or k>arr[row-1][col-1]){
		return {-1,-1};
	}
		int i = 0;
		int j = col-1;
	while(i<=row-1 and j>=0){
			if(arr[i][j] == k){
				return {i,j};
				break;
			}
			else if(arr[i][j]<k){
				i++;
			}
			else{
				j--;
			}
	}

	return {-1,-1};
}



int main(){
	//2D row & Column wise sorted array
	int arr[4][4] = {
		{10,20,30,40},
		{15,25,35,45},
		{27,29,37,48},
		{32,33,39,50}
	};
	int n =4,m=4;
	int key = 50;
	pair<int,int> cordinate = Array_search(arr,n,m,key);
	cout<<cordinate.first<<" "<<cordinate.second<<endl;
	return 0 ;
}
