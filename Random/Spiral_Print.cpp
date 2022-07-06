// //Spiral print 
// //Input : 
// 		1 2 3 4
// 		5 6 7 8
// 		9 10 11 12
// 		13 14 15 16

//Output : 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
#include<iostream>
using namespace std;

void SpiralPrint(int arr[][4],int n){
	int start_row = 0;
	int start_col = 0;
	int end_row = n-1;
	int end_col = n-1;
while(start_col<=end_col and start_row<=end_row){
	for(int i = start_col;i<=end_col;i++){
		cout<<arr[start_row][i]<<" ";
	}
	for(int i = start_row+1;i<=end_row;i++){
		cout<<arr[i][end_col]<<" ";
	}
	for(int j = end_col-1;j>=start_col;j--){
		cout<<arr[end_row][j]<<" ";
	}
	for(int j = end_row-1;j>=end_row;j--){
		cout<<arr[j][start_col]<<" ";
	}
	start_row++;
	start_col++;
	end_row--;
	end_col--;
	}
}
int main(){
	int arr[][4] ={{1,2,3,4},
					{5,6,7,8},
					{9,10,11,12},
					{13,14,15,16}};
	int n=4;
	SpiralPrint(arr,n);				
}