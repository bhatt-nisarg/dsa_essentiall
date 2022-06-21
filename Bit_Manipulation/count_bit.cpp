//count bits
//write a function to count set bits in a number
//setbits means the number which are one(1)
#include<iostream>
using namespace std;
int count_bits(int n){
	int cnt =0;
	while(n>0){
	int last_bit = (n&1);
	cnt += last_bit;

	n = n>>1;
	}
	return cnt;
}
//this is easy and time efficient method 
//easy hack for count bits for an given number
int count_bit_fast(int n){
	int ans=0;
	while(n>0){
		n = n & (n-1);
		ans++;
	}
	return ans;
}
int main(){
	int n;
	cin>>n;
	cout<<count_bits(n)<<endl;
	cout<<count_bit_fast(n)<<endl;
	return 0;

}
