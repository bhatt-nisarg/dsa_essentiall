//2D_Character-Arrays
/*
2d character arrays syntax is 

char [name of the array][size of row][size of column];

*/


#include<iostream>
using namespace std;

int main(){
	char numbers[][10] = {
		"one",
		"two",
		"three",
		"four",
		"five",
		"six",
		"seven",
		"eight",
		"nine",
		"ten"
	};
	int i= 0;
	cout<< numbers[i][0]<<endl;
	//it will print "o" from "one"
	//cout is working diffrent for character arrays 
	/*
	in this numbers[i][0] is a address of the array we cant do the same for integer array
	*/
	for(int i =0;i<10;i++){
		cout<<numbers[i]<<endl;
	}
	return 0;
} 