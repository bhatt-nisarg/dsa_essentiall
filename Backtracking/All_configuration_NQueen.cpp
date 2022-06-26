//In N-Queen problem we have to calculate how to count all configuration and how to print all configuration
/*
N-Queen is the problem of placing N chess queens on an N*N chessboard so that no two queens attack each other
Input  : N = 4
Output : Number of all configuration and print all configuration

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



as you can see that it is large code any its complexity goes to exponantial time 
complexity of this particular problem is O(N^N) which is exponantial 
in case of any tighter bound the in specific column you not put any other queen that make some O(1) change in all operation
that make complexity is N*(N-1)*(N-2)........ 1 which is O(N!) in some cases 
this code is work only for small amount of input for large amount it is possible that  they can give tle(time limit exceed) error
*/
#include<iostream>
using namespace std;

bool QueenCanPlaced(int board[][20],int n,int x,int y){
	//for check above row if queen is placed at same column in above any row or not
	for(int k=0;k<n;k++){
		if(board[k][y]==1){
			return false;
		}
	}
	//for left diagonal check if any of diagonal has placed queen or not
	int i=x;
	int j=y;
	while(i>=0 and j>=0){
		if(board[i][j]==1){
			return false;
		}
		i--;
		j--;
	}
	//for right diagonal check if any of diagonal has placed queen or not
	int b = x;
	int c = y;
	while(b>=0 and c<=n){
		if(board[b][c]==1){
			return false;
		}
		b--;
		c++;
	}

	//if  all condition is not satisfied then we can say that we can placed queen at particular x and y
	// then it return true
	return true;
}
void Print_Board(int board[][20],int n){
	// we print board in 2d matrix 
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<board[i][j]<<" ";
		}	
		cout<<endl;
	}
	cout<<endl;
}
int All_Configuration(int board[][20],int n,int i){
	//base case
	if(i==n){
		//print configuration
		Print_Board(board,n);
		return 1;
	}
	//recursive case 
	//we have to check way of possible n queen to placed in the board
	//first initialize way as zero
	int ways=0;
	//iterate column wise for a particular i
	for(int j=0;j<n;j++){
		if(QueenCanPlaced(board,n,i,j)){
			board[i][j] = 1;
			ways += All_Configuration(board,n,i+1);
		}
		//backtrack if configuration is false
		board[i][j] = 0;
		//put as zero if any miss configuration is found
	}
	return ways;
}
int main(){
	int board[20][20] = {0};
	int n;
	cin>>n;
	int way  = All_Configuration(board,n,0);
	cout<<"ways: "<<way<<endl;

}