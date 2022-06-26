//ALl Occurence!
/*
you are given an integer array of size N. your aim is to find all the occurrences(indices) of a given element.

Input Format:
vector V and  integer k(to find) are passed as parameters.
Output Format:
return a vector of integer containing all the indices in sorted manner.
sample Input :
3
1 2 5 3 1 2 3 8 6 7 9
Sample Output:
3 6 9
*/
#include<iostream>
#include<vector>
using namespace std;

vector<int> all={};
void ALL_Occ(vector<int> ab,int k,int i){

	if(i==ab.size()){
		return;
	}
	if(ab[i]==k){
		all.push_back(i);
	}
	ALL_Occ(ab,k,i+1);
	return;
	


}
int main(){
	all.clear();
	vector<int> v = {1,2,5,3,1,2,3,8,6,3,9};
	int k = 3;
	ALL_Occ(v,k,0);
	for(int x:all){
		cout<<x<<" ";
	}


	
}