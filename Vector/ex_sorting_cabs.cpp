//1st exercise in vector - "sorting cabs"
/*
Given a vector of pairs representing coordinates x and y of diffrent cabs on X-Y plane. Sort them according to their distance from the origin in the non-decreasing order i.e. the cab with shortest distance from the origin will be at first.

Input Format 
in the function an integer vector of pairs is passed.
Output format
return an integer vector of pairs in sorted order.

Sample Input: {(2,3),(1,2),(3,4),(2,4),(1,4)}
Sample Output:
{(1,2),(2,3),(1,4),(2,4),(3,4)}
*/ 

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool shortest(pair<int,int> v1,pair<int,int> v2){
    int total_first  = v1.first + v1.second;
    int total_second = v2.first + v2.second;
    return total_first < total_second;
    
}
vector<pair<int,int>> sortCabs(vector<pair<int,int>> v){
    sort(v.begin(),v.end(),shortest);
    
    return v;               
    
}
int main(){
    vector<pair<int,int>> v = {
        {2,3},
        {1,2},
        {3,4},
        {2,4},
        {1,4}
    };
    
    for(auto x : sortCabs(v)){
   	 cout<<"{"<<x.first<<" , " <<x.second<<"}"<<endl;
	}
}
