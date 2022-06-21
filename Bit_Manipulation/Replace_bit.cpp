//replace bits in n by m
//Explanation : You are given two 32 bit numbers,N and M, and two bit position i and j.
/*write a method to set all bits between i and j in N equal to M.
M(becomes a substring of N locationed at and starting aat j)

Example : N = 100000000;
		  M = 10101;
		  i = 2, j = 6
		  Output : 1001010100 

*/
#include<iostream>
using namespace std;

void clearithbit(int &n,int i,int j){
	int a = (~0)<<(j+1);
	int b = (1<<i) - 1;
	int mask = a | b;
	n = n & mask;
}
void replace_bit(int &n,int i,int j,int m){
	clearithbit(n,i,j);
	int mask = (m<<i);
	n  = n | mask;
	
}
int main(){
	int n = 15;
	int i =1;
	int j = 3;
	int m = 2;
	replace_bit(n,i,j,m);
	cout<<n<<endl;
}
