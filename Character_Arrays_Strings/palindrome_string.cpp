//program for finding that given string is palindrome or not

/*for exammple wehave string like abcba we have to find that this string is palindrome series or not 
*/

/* problem: given a string, write ac function to check if it ispalindrome or not
	a string is said to be palindrome if reverse of the string is same as string.
	For example "abba" is palindrome, but "abbc" is not palindrome.

	Input format : in function stringis passed
	output format : return true if it is palindrome else false.

	sample input : abcdcba
	sample output : true
*/
#include<iostream>
#include<string.h>
using namespace std;

bool check_palindrome(string str,int n){

	int start = 0,end = n;

	while(start<end){
		if(str[start] != str[end]){
				return false;		
		}
		start++;
		end--;
	}
	return true;
}


int main(){
	
	string ab;
	cin>> ab ;
	int n = ab.length()-1;
	
	cout<<check_palindrome(ab,n)<<endl;
	return 0;
}

//this solution is perfect working to check whether the given string is palidrome or not