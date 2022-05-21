//check whether it is prime or not
#include<iostream>
using namespace std;

int main(){
	int n ;
	cout<< "enter Number which you want to check !";
	cin>> n ;
	int i =2;
	while(i <= n-1){
		if(n % i == 0){
			cout<< "It is not prime"<<endl;	
			return 0;
		}
		i = i + 1;
		
	}
	cout<<"It is prime Number"<<endl;
	

}