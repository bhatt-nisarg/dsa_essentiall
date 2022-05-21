//remove duplicates in string

/*
Given a string S, the task is to remove all the duplicaates in the given string in sorted order.

Input Format : in function a string is passed
Output Format : Return the updated string


Sample Input : string s = "geeksforgeeks"
Sample output : "efgkors"
*/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


string remove_duplication(string s){
	int n = s.length();

	string result = "";
	sort(s.begin(),s.end());

	for(int i =0;i<n;i++){
		if(s[i] != s[i+1]){
				result += s[i];
		}
	}
	return result;

}
int main(){
	string s;
	getline(cin,s);

	cout<< remove_duplication(s)<<endl;

	return 0;
}
