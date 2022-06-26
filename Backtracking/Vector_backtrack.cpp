//vector in backtracking
#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int> v,int n){
	//print our array
	for(int i=0;i<n;i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}
/*all the stl function like vector and string all are passed by value means if you not put & along with it is make copy of the given vector and make modification on the new vector
thats why we are put & with vector specially when it is part of function call
& will pass vector by reference instead of pass by value
*/
void fillArray(vector<int> &v,int i,int n,int val){
	//base case
	if(i==n){
		printArray(v,n);
		return;
	}
	//recursive case
	v[i] = val;
	fillArray(v,i+1,n,val+1);
	//backtracking steps
	v[i] = -1*v[i]; 
}
int main(){
	vector<int> v = {0,0,0,0,0,0};
	int n = v.size();
	fillArray(v,0,n,1);
	printArray(v,n);
	return 0;
}