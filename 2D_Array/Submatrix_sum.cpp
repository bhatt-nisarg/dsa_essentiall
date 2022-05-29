//Exercise : 	Submatrix Sum  
/*
Given a matrix of size M * N there are largee number of queries to find submatrix sums. inputs to queries are left top and right bottom indexes of submatrix whose sum is to find out.

How to preprocess the matrix so that submatrix sum queries can be performed in O(1) time.


Input Format : 
Given a matrix(2d vector) and query. each query has starting row, starting column, ending row, ending column.

Output Format :
A single integer which is the sum of the submatrix.

Example : 
	tli : Row number of top left of query submatrix
	tlj : Column number of top left of query submatrix
	rbi : Row number of bottom right of query submatrix
	rbj : column number of botom right of query submatrix

Input : mat[M][N] = {{1,2,3,4,6},
					{5,3,8,1,2},
					{4,6,7,5,5},
					{2,4,8,9,4}};
Query1 : tli = 0, tlj = 0, rbi = 1,rbj = 1
Query2 : tli = 2, tlj = 2, rbi = 3,rbj = 4
Query3 : tli = 1, tlj = 2, rbi = 3,rbj = 3;

Output :
Query1 : 11 // Sum between (0,0) and (1,2)
Query2 : 38 // Sum between (2,2) and (3,4)
Query3 : 38 // Sum between(1,2) and (3,4)

*/

#include<iostream>
using namespace std;
int submatrix_sum(int arr[][5],int tli,int tlj,int rbi,int rbj){

		int sub_sum = 0;
		for(int i = tli;i<=rbi;i++){
			for(int j = tlj;j<=rbj;j++){
				sub_sum += arr[i][j]; 
			}
		}
		return sub_sum;

}
int main(){
	int mat[4][5] = {
					{1,2,3,4,6},
					{5,3,8,1,2},
					{4,6,7,5,5},
					{2,4,8,9,4}
				};
	int tli,tlj,rbi,rbj;	
	cout << "Enter topleft_row,topleft_col,topbottom_row,topbottom_col"<<endl;
	cin>>tli>>tlj>>rbi>>rbj;
	cout<<endl;		

	cout<<submatrix_sum(mat,tli,tlj,rbi,rbj);			
}