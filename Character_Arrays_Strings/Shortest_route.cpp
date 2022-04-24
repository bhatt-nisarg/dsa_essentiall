//practice problem 

//this problem is for finding shortest path
/*
Find Displacement: Given a lone route containing N,S,E,W direction, find the shortest path to reach the location


Sample Input : SNNNEWE
Sample Output: NNE

			N
	 (-,+)	|   (+,+)
			|	
	W - - - + - - - E
			|
	  (--)	|   (+,-)
            S
N = NORTH(y++)
E = EAST(x++)
W = WEST(x--)
S = SOUTH(y--f)
*/

#include<iostream>
using namespace std;

int main(){


	char short_route[1000];


	cin.getline(short_route,1000);

	int x = 0;
	int y = 0;


	for(int i = 0;short_route[i]!='\0';i++){
			switch(short_route[i]){

				case 'E': x++;
						break;
				case 'W': x--;
						break;
				case 'N': y++;
						break;
				case 'S': y--;
						break;						
			}
	}
	// printf("x is : %d and y is : %d",x,y);

	// first quadrent x is positive and y is positive
	if(x>=0 and y>=0){

		while(y--){
			cout<<"N";
		}
		while(x--){
			cout<<"E";
		}
	}
	//second quadrent x is negative and y is positive
	else if(x<=0 and y>=0){
		while(y--){
			cout<<"N";
		}
		while(x++){ 
			cout<<"W";
		}
	}
	//third quadrent x is negative and y is negetive
	else if(x<=0 and y<=0){
		while(y++){
			cout<<"S";
		}
		while(x++){
			cout<<"W";
		}
	}
	//fourth quadrent x is positive and y is negative
	else if(x>=0 and y<=0){
		while(y++){
			cout<<"S";
		}
		while(x--){
			cout<<"E";
		}
	}
	// else{
	// 	cout<<"At Origin!";
	// }
}