//Make Zeros
/*
Given a two-dimensional array, if any element within is zero,make its whole row and column zero. For example,consider the matrix below.

Input Format
in the function a 2d vector is passed
Output Format
Return the updated 2d vector.

Sample Input
{{5,4,3,9},{2,0,7,6},{1,3,4,0},{9,8,3,4}}
Sample Output
{{5,0,3,0},{0,0,0,0},{0,0,0,0},{9,0,3,0}}
*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<vector<int>> zeromat ={
				{5,4,3,9},
				{2,0,7,6},
				{1,3,4,0},
				{9,8,3,4}};
	vector<int> row,col;			
	int n = zeromat[0].size();			
	for(int i =0;i<n;i++){
		for(int j=0;j<n;j++){
			if(zeromat[i][j]==0){
				row.push_back(i);
				col.push_back(j);
			}
		}
	}			   
	for(int x: row){
	for(int j =0;j<n;j++){
			zeromat[x][j]  = 0;
	}	
	}	

	for(int y: col){
	for(int i =0;i<n;i++){
			zeromat[i][y]  = 0;
	}}

	for(int i =0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<zeromat[i][j]<<" ";
		}
		cout<<endl;
	}			   



}