/*
		Sorting cartesian Points

		Description : Given co-ordinates of N points on X-Y axis,your task is to sort them in accordance to the x-coordinate.if the x-coordinate are same then compare y-coordinate

		Input Format:

		input in the function an integer vector of pairs is passed.

		Output Format:
		Return the vector in sorted order.

		Sample Input : 
			{(3,4), (2,3),(3,7),(1,5),(3,4)}

		Sample Output:
		{(1,5), (2,3), (3,4), (3,4), (3,7)}	

*/

// #include<iostream>
// #include <vector>
// #include<algorithm>
// using namespace std;


// int main(){
// 	vector<pair<int, int>> arr = {(3,4), (2,3), (3,7), (1,5), (3,4) };

	
// 	int n = arr.size();

// 	sort(arr.begin(),arr.end());

	
// }


// this is the correct solution
// --->>
#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int>> sortCartesian(vector<pair<int, int>> v)
{
    int N = v.size();
    // your code goes here
    sort(v.begin(),v.end());
    
    return v;
}
