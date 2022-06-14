#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int n ;
	cin>>n;
	while(n--){
	vector<int> num;
	
	for(int i =0;i<3;i++){
	    cin>>num[i];
	}
	sort(num.begin(),num.end());
	for(int x : num){
		cout<<x;
	}
	
	}
	return 0;
}
