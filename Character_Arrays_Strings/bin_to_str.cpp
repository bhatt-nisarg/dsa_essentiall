//Binary string to number 
/*
Given a binary string as inout convert its decimal form and return it as an integer.

Input Format : in the function a binary string is passed
Output Format : Return an integer

Sample Input : 111
Sample Output : 7
*/
#include<iostream>
#include<string>
using namespace std;

int bin_to_Int(string s){
	int n = s.length();
	int result = 0;
	//base for multiply base with 1*(2^0),2*(2^1),...
	int base = 1;

	for(int i = n-1;i>=0;i--){
		if(s[i]=='1'){
			result += base;
		}
		base *= 2 ;    // it is another type of base = base * 2
	}
	return result;
}

int main(){
	string bin_str;
	getline(cin,bin_str);

	cout<<bin_to_Int(bin_str)<<endl;

	return 0;

}