//Tilling problem 
/*
Given a "4 * n" board and tiles of size "4 * 1", count the number of ways to tile the given board using the 4 * 1 tiles.

A tile can either be placed horizontally i.e., as 1 * 4 tile or vertically i.e., as 4 * 1 tile
Input : N 
Output : No of ways
*/

/* tilling problem exercise question : 
you are givne N tiles of size 1 * M, there is a floor of size N*M which you have to cover with tiles. Find the number of ways the floor can be completely covered if you can place the tiles in both horizontal and vertical manner
Input Format : in the function two integer n and m are passed.
Output Format : Return a single integer enoting the number of ways.
Sample Input : 4 3
Sample Output : 3
*/
#include<iostream>
using namespace std;


int tilling_problem(int n,int m){
	//base case if n<m means we have only one way it vertically because we not have lenght as given as input
	if(n<m){
	return 1;
	}
	//recursive case
	int way = tilling_problem(n-1,m) + tilling_problem(n-m,m);
	return way;
}
int main(){
	int  n,m;
	cin>>n>>m;
	cout<< tilling_problem(n,m);

}
