//vowel find  
/*
Given a string consisting of lowercase english alphabets, return a string containing all the volwels present in S in serial order.

Input Format 
in the function a string S is passed

Output Format 
return a string

Sample Input
S ="aeoibsddaeioudb"

Sample Output
"aeioaeiou"
*/

#include<iostream>
#include<string>
using namespace std;

string vowel_find(string s){
	int n = s.length();
	string vowel = "aeiou";
	string result;

	for(int i=0;i<n;i++){
		for(int j =0;j<vowel.length();j++){
			if(s[i] == vowel[j]){
				result += s[i];
			}
		}
	}
	return result;
}
int main(){
	string S; //= "aeiousbdferioue";
	getline(cin,S);

	cout<<vowel_find(S);
	return 0;
}