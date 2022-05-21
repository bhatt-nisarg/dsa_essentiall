//string class
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
/* 
 in cpp++ we can declare string in two way 
 1) using a character array
 2)using string class
 */
	//this method is not feasible to use string
	//char s[1000] = {'1','a','b','c','\0'};

	//in the second method we have string class which have lots of inbuilt function which is dynamic array
	// cout<< "this is string initialization"<< endl;
	// string s = "hello Nisarg"; //dynamic array

	// cout << s<<endl;


	// //if you want to take input from user then it will use dynamic memory at runtime

	// cout<< "this is take input from user and display"<<endl;

	// string ab;
	// getline(cin,ab);
	// //if you want to make a termination operator which is terminate by that symbol then you can write like this
	// //getline(cin,ab,".");//terminate by . operator

	// cout<< ab<< endl;

	// //we have to iterate over each character of string then we us foreach loop for this
	// cout<< "separate each character "<<endl;
	// for(char ch : ab){
	// 	cout<< ch<<",";
	// }




	//now we can give multiple string as input
	int n ;
	cout<< "How many string want you to print ?"<<endl;
	cin>>n;

	vector<string> abc;
	string temp;
	//it is for consume \n
	cin.get();
	while(n--){
		getline(cin,temp);
		abc.push_back(temp);
	}
	for(string each : abc){
		cout <<each<<"/";
	}


}