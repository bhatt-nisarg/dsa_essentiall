//run length encoding for string compression
//if compressed string is bigger than original return original string
//Input : aaabbccddee
//output : a3b2c2d2e2

//input : abcd
//output : abcd

#include<iostream>
#include<string>
using namespace std;

string length_encoding(string s){
	string result;
	int n = s.length();

	for(int i =0;i<n;i++){
		int count =1;
		while(i<n-1 and s[i+1] == s[i]){
			count++;
			i++;

		}
		result += s[i];
		result += to_string(count);
	}
	if(result.length() > s.length()){
		return s;
	}
	return result;
}
int main(){

	string a = "aabbbcccc";
	cout<<length_encoding(a)<<endl;
	string b = "abcde";
	cout<<length_encoding(b)<<endl;

	return 0;
}