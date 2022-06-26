//Grid Paths
/*
Given a M*N grid,find the number of ways to reach the bottom right core=ner starting from top left.At each cell you can move "right or down"
Input : 2D Matrix
Output: Integer denoting the number of ways
we can solve this problem using recursion in O(2^(m+n)) time complextiy
using dynamic programming we can solve in O(N^2) time complexity
*/
#include<iostream>
using namespace std;
int Grid_Paths(int i,int j,int m,int n){
	//base case 
	if(i==m-1 and j==n-1){
		return 1;
	}
	//we have to cover corner case that if it is at corner or not
	if(i>=m or j>=n){
		return 0;
	}
	//recursive case
	// we have to go either right side or down side for this we have recurrence like this
	int ans = Grid_Paths(i+1,j,m,n) + Grid_Paths(i,j+1,m,n);
	return ans;

}
int main(){
	int m,n;
	cin>>m>>n;
	cout<<Grid_Paths(0,0,m,n);

}

//one mathematical trick to solve this thing is we applied permutation on row and column(solve in O(m+n))
// as you can see that first path is 
/*
right right down down
down down right right
right down right down
down right down right
down right right down
right down down right

these 6 possible way 
for this we have m-1 direction and n-1 direction
using permutation we have total path is   (m-1+n-1)!   this is the formula for finding path ways in linear time O(m+n) using permutation combination concept
 										_____________
										(m-1)!.(n-1)!


*/
