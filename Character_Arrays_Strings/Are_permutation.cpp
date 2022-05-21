//problem : Are permutation
/*
Given two strings A and B check if one string is permutation of the other.
A Permutation of a string is another string that contains same characters, only the order of characters can be diffrent. for example "abcd" and "dabc" are permutation of each other.

input format  : in the function two strings passed.
output format : return true if b is permutation of A else false.


Sample input string a = "test",B = "ttew"

sample output : No
*/

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

bool check_permutation(string A,string B){
	int n1 = A.length();
	int n2  = B.length();

	// check length of two string is same or not if it is not same then return false
	if(n1 != n2){
		return false;
	}

	//sort string because it is easy to compare two string
	sort(A.begin(),A.end());
	sort(B.begin(),B.end());

	//now iterate in each character and compare string character one by one
	for(int i =0;i<n1;i++){
		if(A[i] != B[i]){
			return false;
		}
	}
	return true;

}
int main(){
	string A = "test";
	string B = "ttew";

	if(check_permutation(A,B) == 0){
		cout<<"false";
	}
	else{
		cout<<"true";
	}
}