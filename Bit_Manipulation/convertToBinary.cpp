//convert decimal to binary number
/*
for example we have n=9 and we have to convert it into a binary number
then we its binary is 1001
first we left shift and  if and multiply  with power and add to our answer*/
#include<iostream>
using namespace std;


int ConvertToBinary(int n){
	int ans = 0;
	int power = 1;
	while(n>0){
		int last_bit = (n&1);
		ans += power * last_bit;
		power = power * 10;
		n = n>>1;
	}
	return ans;
}
int main(){
	int n;
	cin>>n;
	cout<<ConvertToBinary(n)<<endl;
}