//Character Array Introduction
  

//creating a char array 
/*
char a[100];

//this is wrong to initialize
//dont write like this
//in this method youu will get garbage value at the end of the array
//it will print untill find any null character
char a[100] = {'a','b','c'};

///this below method not give any garbage value
//below method is correct for initialization of character array
char a[100] = {'a','b','c','\0'};
//always terminate by \0 special character
char a[100] "abc";
*/

#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char a[] = "abcdefghi";
	// char a[] = {'a','b','c','d','e','f','g','h','\0'};

	cout << a <<endl;
	//in order to take value using cin we have only one problem 
	// if we input any array that contain space then cin only take value till the space in char array
	//input : hello world
	//output : hello


	//take input from user
	char b[100];
	cin>>b;
	cout << b <<endl;


	// so in order to take character array from user not need to take for loop it is easy using cin not necessary to use for loop


	cout<< strlen(a)<<endl;  // number of visible characters
	cout<<sizeof(a)<<endl;	//+1 because of null character
	
	
	
	return 0;
 }
