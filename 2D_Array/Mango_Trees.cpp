//Computing Prefix sums
//Problem : Mango Trees

/*Problem Deffinition
Rahaul's father has left a farm organized as an N*N grid.Each square in the grid either has or does not have a mango tree.
he has to divide th farm with his three sister as Follows:
	he will draw one horizontal line and one verticle line to divide the field into four rectangles. His friends will choose three of the four smaller fields and he gets the last one.

	Goal : "goal is what is the maximum trees he can get"



	Input : For example,suppose the field looks as follows:
					. # # . . .
					# . . # # .
					. # . . . .
					. # # . . #
					# . . # # .
					. # . . . .

	Output : 		Ramu can ensure that he gets atleast 3 mango trees by cutting as follows:
					. # | # . . .
					# . | . # # .
					. # | . . . .
					----+--------
					. # | # . . #
					# . | . # # .
					. # | . . . .	

Solution : if ramu draws the vertical line after column x and the horizontal line after row y, we represented it by (x,y).
		   For each cut(x,y),we need to calculate the maximum rectangle that it creates.then overall the cuts,we choose the one whose minimum rectangle is maximized.
The problem is to efficiently calculate the minimum rectangle that it creates. then overall the cuts,we choose the one whose minimum rectangle is maximized.

the problem is to efficiently calculate how a cut divides up the mangtrees in the four rectangles.

Let M[x,y] be thenumber of mango trees in the rectangle between (0,0) and (x,y).we can calculate M[x,y] as follows:
	M[x,y] = 1 + M[x-1,y] + M[x,y-1] - M[x-1,y-1],iftree at (x,y)
			0 + M[x-1,y] + M[x-1,y-1],if no tree at (x,y).

Thus M[x,y] be the number of mango trees in the rectangle  formed by the cut. using M[x,y], we can also calculate the number of mango trees in the top right an bottom left rectangles defined by (x,y).

Top right rectangle :
						M[N,y] = M[x,y] : Number of mangos in rectangle defined by (x,y) and (N,0)
Bottom left rectangle : 
						M[x,N] = M[x,y] : Number of mangos in rectangle defined by (0,N) and (x,y)

Finally, we subtract these quantities from total number of mango trees to get number of mangos in fourth rectangle (bottom right),defined by (x,y) and (N,N).												
								
*/

#include<iostream>
using namespace std;

int main(){
	char mango[][6] = {
			{'.','#','#','.','.','.'},
			{'#','.','.','#','#','.'},
			{'.','#','.','.','.','.'},
			{'.','#','#','.','.','#'},
			{'#','.','.','#','#','.'},
			{'.','#','.','.','.','.'}
	};
	int n = 6;




}