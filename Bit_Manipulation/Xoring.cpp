//Xoring
/*
Problem:
we are given an array containing n numbers. all the numbers are present twice except for one number which is only present once. find the unique number without taking any extra space and in linear time.

Input format
an integer vector is passed in the function 
constrainst
n<10^5
Output Format
retrun a single integer containing the unique number
Sample input : {1,2,3,1,4,2,3}
Sample Output : 4
Explanation : 4 is present only once
*/

#include<iostream>
#include<vector>
#include<algorithm>         	
using namespace std;
int main(){
	int ab=0;
	vector<int> a = {1,2,3,1,4,2,3};
	int n = a.size();

	sort(a.begin(),a.end());
	for(int i =0;i<n;i++){
		if(a[i]==a[i+1]){
			i++;
		}
		else{
			cout<<a[i]<<endl;
		}
	}
}