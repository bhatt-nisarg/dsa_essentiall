//Chopsticks

/*
Problem : 
	Given N sticks and an array length where each length[i] represents length of each stick.
	your task is to make maximum number of pairs of these sticks that the diffrence between 
	the length of two sticks is at most D. A stick can't be part of more than one pair of sticks 

	Input Format : in the function an integer vector length and number D is passed.

	Output Format: Return an integer representing total number of such pairs

	Sample Input  : {1,3,3,9,4},x = 2
	Sample Output : 2

	Explanation :

	(1st,3rd) and (2nd,5th) can be paired together.

*/

#include<iostream>
#include<vector>
using namespace std;


int main(){
	vector<int> v = {1,3,3,9,4};
	int x = 2;
	int n = v.size();
	int count = 0;

	for(int i =1;i<=n;i++){
		if((v[i]-v[i+2]) <= x && (i+2)<=n){
			count += 1;
			// cout<<v[i]<<","<<v[i+1];
		}
	}
	cout << count;

}