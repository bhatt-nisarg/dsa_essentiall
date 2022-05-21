//reverse string

#include <iostream>
#include<string>
using namespace std;

int main(){
	string a = "computer";

	int s = 0;
	int e = a.length()-1;

	while(s<=e){
		int temp;
		temp = a[s];
		a[s] = a[e];
		a[e] = temp;
		s++;
		e--;
	}
	cout<<a<<endl;
}