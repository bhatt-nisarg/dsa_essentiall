//permutation : permutation of a n length string as n!(n factorial) way
//permutations with duplicates allowed
#include<iostream>
using namespace std;

/*
Function to print permutations of string
this function takes three parameters:
1. string
2. starting index of the string
3. ending index of the string
*/
void permutation(string s,int start,int end){
	//base case
	if(start==end){
		cout<<s<<endl;
	}
	else{
		//Permutation mmade
		for(int i=start;i<=end;i++){
			//swapping done
			swap(s[start],s[i]);

			//Recursion called
			permutation(s,start+1,end);
			//backtrack
			swap(s[start],s[i]);
		}
	}
}
int main(){
	string str = "ABC";
	int n = str.size();
	permutation(str,0,n-1);
	return 0;
}