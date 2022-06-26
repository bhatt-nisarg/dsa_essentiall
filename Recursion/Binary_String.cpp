/* Binary strings!  
you are given an integer N. your task is to print all binary strings of size N without consecutive ones.
Constraints : N<= 12
Input Format : in given function an integer N is passed as parameter.
Output Format:
Return a vector of strings,with all possible strings in a sorted order.
Sample Input:
3
Sample Output:
000
001
010
100
101

Expected time complexity O(2^n)
*/
#include<iostream>
#include<vector>
using namespace std;
vector<string> v;

void helper(string str,int n,int i){
	//base case
	if(i==n){
		v.push_back(str);
		return;
	}
	string s1 = str;
	s1.push_back('0');
	helper(s1,n,i+1);

	if(i>0 && str[i-1]=='0'){
		str.push_back('1');
		helper(str,n,i+1);
	}
	else if(i==0){
		str.push_back('1');
		helper(str,n,i+1);
	}
	return;

}

int main(){
	int n;
	v.clear();
	string str;
	cin>>n;
	helper(str,n,0);
	for(auto s:v){
		cout<<s<<endl;
	}

}