//pascal triangle 
/*
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1

*/
#include<iostream>
using namespace std;

int main(){
	int row;
	cin>>row;
	int printint;
	for(int i =0;i<row;i++){
		for(int j =0;j<=i;j++){
			if(i==0 or j==0){
				printint = 1;
				cout<<printint;
			}
			else{
				//this is formula for finding which number print in specific space
				printint = printint*(i-j+1)/j;
				cout<<printint;
			}
		}
		cout<<endl;
	}
	return 0;
}