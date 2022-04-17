/*   in this exercise we input a vector and one input flag 

	if flag is 1 then sort array in ascending order otherwise sort in decsending order

	sort with comparator function

*/

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;


bool compare(int a,int b){
	return a<b;
}

int main(){
	vector<int> arr = {1,3,2,1,4,6,3,2,5,8,4,0,1,3,4,2,1,4,6,7,9,7,4,5,3,2,4,6,2,0,-1,-2,-100,-200};

	int flag;
	cin>>flag;

	if(flag==1){
		sort(arr.begin(),arr.end(),greater<int>());
	}
	else{
		sort(arr.begin(),arr.end(),compare);
	}

	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<",";
	}
}