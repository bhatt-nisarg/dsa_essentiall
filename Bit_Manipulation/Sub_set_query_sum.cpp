//Subset sum queries
/*
Given an array and N number ofqueries,where in each query you have to check whether a subset whose sum is equal to given number exists in the array or not
Input Format : in the function two vectors num and query are passed.
	sampple Input : num[] = {1,2,3}
					query[] = {5,3,8}
output format
return a bool vector of size N representing each query.
sample output : {yese,yes,no}

Explanation:
	there is a subset with sum 5, subset is {2,3}
	there is a subset with sum 3,subset is {1,2}
	there is no subset with sum 8					

*/
#include<bits/stdc++.h>
using namespace std;



// int main(){
// 	vector<int> num = {1,2,3};
// 	vector<int> query = {5,3,8};
// 	vector<bool> res ;

// 	for(int i =0;i<query.size();i++){
// 		if(num[0]+num[num.size()-1]==query[i]){
// 			res.push_back(1);

// 		}
// 		for(int j=0;j<num.size();j++){
// 			if(num[j]+num[j+1]==query[i]){
// 				res.push_back(1);
// 				break;
// 			}
// 		}
// 		if(res[i] != 1){
// 			res.push_back(0);
// 		}
// 	}
// 	for(bool x: res){
// 		cout<<x<<endl;
// 	}
// }

//using bitset
vector<bool> subbsetSum(vector<int> v, vector<int> q){
	int n = q.size();

	vector<bool> b(n);
	bitset<10> bit;
	bit.reset();
	bit[0]  = 1;


	for(int i=0;i<v.size();++i){
		bit |= (bit << v[i]);
		cout<<bit<<endl;
		//here we or the element binary in one bit sett and leftshift v[i] times 1 

	}
	for(int i=0;i<n;i++){
		int x = q[i];
		bit[x]? b[i]=true : b[i] = false;
		//it is check whether bit[x] ==1 then it is true otherwise 0
		cout<<bit[x]<<b[i]<<endl;
	}
	return b;
}
int main(){
	vector<int> v= {1,2,3};
	vector<int> q ={5,3,8};
	subbsetSum(v,q);
}
