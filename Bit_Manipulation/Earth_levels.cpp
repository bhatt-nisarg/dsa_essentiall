//Earth levels!
/*Problem
	the planet earth is under a threat from the aliens of the outer spacce and your task is to defeat an enemy who is N steps above you (assume yourself to be at ground level i.e. at the 0th level). you can take jumps in power of 2.in order to defeat the enemy as quickly as possible you have to reach the nth step in the minimum moves possible.

	Input Format 
	in the function an integer is passed. ex : 7
	Output Format
	Return an integer representing minimum jumps.
	output : 3
*/
/*for example we have input is 7 then we have to take 3 steps because we have 7 binary is 111
in 7 bianry we have 3 one means we have to take three steps to the power of two
2^0,2^1,2^2 = 1 + 2 + 4 = 7
*/
#include<iostream>
using namespace std;
int main(){
	int k ;
	cin>>k;
	int ans =0;
	while(k>0){
		int  last  = k&1;
		if(last){
			ans++;
		}
		k = k>>1;
	}
	cout<<ans;
}
