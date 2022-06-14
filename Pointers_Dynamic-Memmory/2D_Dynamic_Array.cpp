//2D Dynamic Array
/*
for 2d dynamic array first we create one array which stores the address of each row and point to it and after that  create second array for printing column for that particular row
*/


#include<iostream>
using namespace std;

int** Create2DDynamicArray(int row,int cols){
	
	//first create address array for row by row
	int ** arr = new int*[row];    //this is one array for pointing to 2d array row

	//this we create for column array
	for(int i =0;i<row;i++){
		arr[i] = new int[cols];
	}
	//one variable for each element of the box
	//init the array with increasing list of nos
	int values =0;
	//inserting element to an array
	for(int i =0;i<row;i++){
		for(int j=0;j<cols;j++){
			arr[i][j] = values;
			values++;
		}
	}
	return arr;

}

int main(){
	
	//2D dynamic array
	int row,cols;
	cin>>row>>cols;

	int** arr = Create2DDynamicArray(row,cols);

	for(int i =0;i<row;i++){
		for(int j =0;j<cols;j++){
				cout<< arr[i][j] <<" ";
		}
		cout<<endl;
	}

	return 0;


}

