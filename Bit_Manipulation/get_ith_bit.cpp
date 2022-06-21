//write a function to get the ith bit of the number
/*
for get ith bit first we  take one number suppose it is 5
and we want i th bit as 2
then 
ith bit binary number is
000101
and we want 2 bit then we can use left shift of 1 to 2 times
1 binary is 000001
leftshift 2 of binary 1 is 000100
and we  and with is n

	000101
&	000100   <= this is nothing but 1<<i (1 left shift ith times)
------------
	000100 	if it is >0 then the ith bit  is 1 
			if ==0 then the ith bit is 0

*/
#include<iostream>
using namespace std;

int get_i_bit(int n,int i){
	int  mask = 1<<i;
	return ((n & mask)==0)?0:1;
}
//why we use &n ? 
// because we have to change in the same number not copy of the number

int set_i_bit(int &n,int i){
	int mask = 1<<i;
	return (n|mask);
}
//if we want to negation this then we can clear this bit using  this method
int clear_bit(int n,int i){
	int mask = ~(1<<i);
	n = n & mask; 
}
// update bit is combination of two operation first clear bit and second update bit.
//in update bit we give reference  of n and int i and value that we have to put in ith bit
void update_bit(int &n,int i,int val){
	clear_bit(n,i);
	int mask = (val<<i);
	n = n|mask; // sets the right value

}
void clearLastIthBit(int &n,int i){
	//for clear last ith bit we left shift ith bit to -1 and then after we perform &(and) operation with the number
	int mask = (-1<<i);
	n = n & mask;
}
void clearRangeIthBit(int &n,int i,int j){
	int a = (~0)<<j+1;  // this we need 1111100000 
	int b = (1<<i) -1;	// this we need 0000000011
	int mask = a | b;	//this we need  1111100011
	n = n & mask;		//this we need  n & mask
}
int main(){
	int n = 31;
	int i=1;
	int j =3;
	// cin>>i;//take i which you want to get
	// cout<<"Before change ith bit : "<<get_i_bit(n,i)<<endl;
	// cout<<"After change number : "<<set_i_bit(n,i)<<endl;
	// cout<<"After clear the bit : "<<clear_bit(n,i)<<endl;
	// update_bit(n,i,0);
	// clearLastIthBit(n,i);
	clearRangeIthBit(n,i,j);
	cout<<n<<endl;
}


