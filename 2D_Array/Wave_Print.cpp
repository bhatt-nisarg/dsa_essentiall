//wave print   
/*
Givren a matrix,print it in reverse wave form.


Input Format : Given integer m(number o rows),integer n (number of columns) ans 2d vector

Output Form : Return a linear vector of integers in the required order.

Example : Input : 1 2 3 4
				  5 6 7 8
				  9 10 11 12
				  13 14 15 16
		  Output : 4 8 12 16 15 11 7 3 2 6 10 14 13 9 5 5	
		  
		  Input : 1 9 4 10
		  		  3 6 90 11
		  		  2 30 85 72
		  		  6 31 99 15
		  Output : 10 11 72 15 99 85 90 4 9 6 30 31 6 2 3 1

*/
#include<iostream>
#include<vector>
using namespace std;

void Wave_print(vector<vector<int>> arr,int m,int n ){

	vector<int> result;
	//first we have to declare variable
	int startrow = 0;
	int startcol = 0;
	int endrow = m-1;
	int endcol = n-1;

	while(endcol>=0){

		//first we traverse top to bottom

		for(int toptodown = startrow;toptodown<=endrow;toptodown++){
				if(startrow==endrow){ 
					break;
				}
				result.push_back(arr[toptodown][endcol]);
		}
		endcol = endcol-1;
		//traverse bottom to top 
		for(int bottomtotop = endrow;bottomtotop>=startrow;bottomtotop--){
				
				result.push_back(arr[bottomtotop][endcol]);
		}
		endcol = endcol-1;
	}
	for(int x: result){
		cout<<x<<" ";
	}

}
int main(){
	vector<vector<int>> wave_arr = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
	};
	int m_row = 4,n_col = 4;
	Wave_print(wave_arr,n_col,m_row);

	return 0;
}