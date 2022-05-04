/*
string coppy compare concatinate and find the length of the string all function in string
*/

#include<iostream>
#include <string.h>
using namespace std;

int main(){
	char a[1000] = "apple";
	char b[1000];

	//calculate length of string
	cout<< strlen(a) <<endl;

	//copy string from one to another
	strcpy(b,a);    // first parameter is destination parameter
	//and second parameter is source parameter
	cout<< b<<endl;

	//Compare two string
	//strcmp
	cout<<strcmp(a,b) <<endl;

	char web[] = "www.";
	char domain[] = "bhattnisarg.com";

	cout<< strcat(web,domain) << endl;


	//now we copy this concatinated string into b and compare with a
	strcpy(b,strcat(web,domain));
	cout<< b<<endl;
	// cout<<strcmp(b,a)<<endl;
	// cout<<strcmp(a,b)<<endl;
	return 0;



}