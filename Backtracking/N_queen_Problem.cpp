//N queen Problem
/* 
N-Queen is the problem of placing N chess queens on an N*N chessboard so that no two queens attack each other
Input  : N = 4
Output : 2D Matrix with Queens 

Explanation Queens can move along : Row,column and diagonal 
we have to setup this configuration
for this N=4

4| |*| | |				
-----------
3| | | |*|
-----------
2|*| | | |
-----------
1| | |*| |				
  1 2 3 4

here * is a queen placed

Possible variations
-Print one configuration
-print all configurations
-count possible configurations


*/
// 1st variation  is One Configuration
//we have to check whetther the given n queen we can placed or not
#include<iostream>
using namespace std;
bool can_placed(int board[][20],int n,int x,int y){
	//first check for column 
	//if any one queen is placed at the same column or not
	for(int k=0;k<x;k++){
		if(board[k][y]==1){
			return false;
		}
	}
	//then we check for left diagonal if any queen is place at its left diagonal or not
	int i = x;
	int j= y;
	while(i>=0 and  j>=0){
		if(board[i][j]==1){
			return false;
		}
		i--;
		j--;
	}
	//then we check same as right diagonal if any queen place at its right diagonal or not
	int l=x;//this i and j is not same as above it is reinitialized with x,y
	int m=y;
	while(l>=0 and m<=n){
		if(board[l][m]==1){
			return false;
		}
		l--;
		m++;
	}
	return true;
}
void PrintBoard(int board[][20],int n){

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<board[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}
bool N_Queen_Prob(int board[][20],int n,int i){
	//base case
	if(i==n){
		//if row is equal to n then we print board
		PrintBoard(board,n);
		return true;
	}
	//recursive case
	// we have to iterate through all column and check whether we can place queen at particular i and j or not
	//here we have i is fixed we have to increment j 
	for(int j=0;j<n;j++){

		if(can_placed(board,n,i,j)){
			board[i][j] = 1;
			bool success = N_Queen_Prob(board,n,i+1);
			if(success){
				return true;
			}
			//otherwise we backtrack one step back and make board[i][j] =0
			board[i][j]=0;
		}

	}
	//if loop is over  and no possible solution for placed all n queen to the board then we simply return false
	return false;	
}
int main(){

	int board[20][20] = {0};
	int n;
	cin>>n;
	N_Queen_Prob(board,n,0);
	return 0;
}