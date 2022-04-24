//count alphabets digits and spaces in the given input

#include<iostream>
using namespace std;

int main(){

	char ch;

	ch = cin.get();

	//we have to count the alphabet digit and space then we put one counter 
	int alpha = 0;
	int space = 0;
	int digit = 0;

	while(ch != '\n'){
		if(ch >= '0' and ch <= '9'){
			digit++;
		}
		else if((ch>='a' and ch <='z') or (ch >= 'A' and ch <= 'Z')){
			alpha++;
		}
		else if(ch == ' ' or ch == '\t'){
			space++;
		}
		ch = cin.get();
		
	}
	cout<<"No of Alphabets : " << alpha<<endl;
	cout<<"No of Digits : "<<digit <<endl;
	cout<<"No of spaces : "<<space<<endl; 
}