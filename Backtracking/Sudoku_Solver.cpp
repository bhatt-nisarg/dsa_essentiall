//Sudoku Solver
/*
Given a partially filled Sudoku Matrix of 9*9,write a function to fill the matrix using Sudoku Rules 
Input : 2D Matrix
Output : Solved 2D Matrix
if we have given n*n matrix then the rules of sudoku is
every row contains 1 to n element which are not repeating
in every column contains 1 to n element which are not repeating
and in subgrid contain 1 to n with no repeatation 

Solve sudoku problem for this given 9*9 matrix
n=9 
5,3,0,0,7,0,0,0,0
6,0,0,1,9,5,0,0,0
0,9,8,0,0,0,0,6,0
8,0,0,0,6,0,0,0,3
4,0,0,8,0,3,0,0,1
7,0,0,0,2,0,0,0,6
0,6,0,0,0,0,2,8,0
0,0,0,4,1,9,0,0,5
0,0,0,0,8,0,0,7,9

*/
#include<iostream>
using namespace std;

bool NumCanPlace(int mat[][9],int i,int j,int num,int n){
	//first we can check that if in particular i and mat[i][j]==num or not
	for(int k=0;k<n;k++){
		if(mat[k][j]==num || mat[i][k]==num){
			return false;
		}
	}
	//now check for subgrid that in particular subgrid if mat[i][j]==num or not
	int Sx = (i/3)*3;
	int Sy = (j/3)*3;
	for(int row=Sx;row<Sx+3;row++){
		for(int col=Sy;col<Sy+3;col++){
			if(mat[row][col]==num){
				return false;
			}
		}
	}
	// if it mat[i][j]!=num then we return true
	return true;
}
bool SolveSudoku(int mat[][9],int i,int j,int n){
	//base case
	if(i==n){
		//first print the matrix
		for(int i=0;i<9;i++){
			for(int j=0;j<9;j++){
				cout<<mat[i][j]<<" ";
			}
			cout<<endl;
		} 
		//and then return to main
		return true;
	}
	//recursive case
	//first we have to check whether it is at end of the row or  not
	//if it as end of the row then we have to goto next i+1 and j=0
	if(j==n){
		return SolveSudoku(mat,i+1,0,n);
	}
	//if at box if it is already filled element
	if(mat[i][j]!=0){
		return SolveSudoku(mat,i,j+1,n);
	}
	// for all blank we have to apply one one number to it
	for(int num=1;num<=9;num++){
		if(NumCanPlace(mat,i,j,num,n)){
			mat[i][j]=num;
			bool solveSUbProblem = SolveSudoku(mat,i,j+1,n);
			if(solveSUbProblem==true){
				return true; 
			}
		}


	}
	//backtracking step if back track then put zero which index we have put wrong
	mat[i][j]=0;
	return false;

}
int main(){
	int n=9;
	int mat[9][9] = {
			{5,3,0,0,7,0,0,0,0},
			{6,0,0,1,9,5,0,0,0},
			{0,9,8,0,0,0,0,6,0},
			{8,0,0,0,6,0,0,0,3},
			{4,0,0,8,0,3,0,0,1},
			{7,0,0,0,2,0,0,0,6},
			{0,6,0,0,0,0,2,8,0},
			{0,0,0,4,1,9,0,0,5},
			{0,0,0,0,8,0,0,7,9}
		};
	SolveSudoku(mat,0,0,n);

}