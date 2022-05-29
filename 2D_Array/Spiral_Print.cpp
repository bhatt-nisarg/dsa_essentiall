//Spiral Print 
/*
write a function that takes in n * m 2D Array, and prints the all array elements in a spiral order.start from top left corner goes to right,proceeds in a spiral pattern untill every element in visited.
				
	INPUT :  1   2   3   4 
			 5   6   7   8 
			 9  10  11  12 
			13  14  15  16 
		
	OUTPUT: 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10		
*/
#include<iostream>
using namespace std;


void Spiral_Print(int arr[][4],int n,int m){
	
	//first decalre all row and column variable
	int start_row =  0;
	int end_row = n-1;
	int start_col = 0;
	int end_col = m-1;


	//iteration loop for n = 4 we need n/2 = 2 iteration
	//finaly we have to repeat this process n/2 time
	while(start_col<=end_col  and start_row<=end_row){
	
			//first we are iterating 1st row from left to right
			for(int col = 0;col<=end_col;col++){
				cout<<arr[start_row][col]<<" ";
			}

			//we print end row from top to bottom 
			for(int row = start_row+1;row<=end_row;row++){
				cout<<arr[row][end_col]<<" ";
			}
			//we print end row from right to left
			for(int col = end_col-1;col>=start_col;col--){

				if(start_row==end_row){
					break;
				}
				cout<<arr[end_row][col]<<" ";
			}

			//then finaly we print start column from bottom to top till start row+1
			for(int row = end_row-1;row>start_row+1;row--){
					//it is avoid duplicate printing of elements 
					if(start_col ==end_col){
						break;
					}
					cout<<arr[row][start_col]<<" ";
			}

			//we have to update the row and column for next iteration
			start_row++;
			end_row--;
			start_col++;
			end_col--;
	}
	


}
int main(){
	int spiral_mat[5][4] = { 
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16},
		{17,18,19,20}
	};
	int n_row= 5,m_col = 4;
	Spiral_Print(spiral_mat,n_row,m_col);

	return 0;
}

