//rotate image
/*
you are given n*n 2d matrix representing an image, rotate the image by 90 degree(clockwise)
You have to rotate the image in-place,which means you have to modify the input 2d matrix directly.
do not allocate another 2d matrix and do the rotation.

Sample Input 
 	matrix = [[1,2,3],[4,5,6],[7,8,9]]
Sample Output
	[[7,4,1],[8,5,2],[9,6,3]]

Constraints-:
	matrix.length == n
	mtrix[i].length == n
	1<=n<=20
	-1000<=matrix[i][j]<=1000
*/
#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<vector<int>> mat = {
		{1,2,3},
		{4,5,6},
		{7,8,9},
	};
	int n= mat[0].size();
	int arr[n*n];
	int k =0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			arr[k] = mat[i][j];
			k++;
		}
	}
	
	int count=0;
	
	for(int j =n-1;j>=0;j--){
		for(int i=0;i<n;i++){
			mat[i][j]  = arr[count];
			count++;
		}
	}

	for(int i=0;i<n;i++){
		for(int x : mat[i]){
			cout<< x<<" ";
		}
		cout<<endl;
	}

}

