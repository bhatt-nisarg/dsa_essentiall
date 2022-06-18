#include <iostream>
using namespace std;
int even_odd(int a){
	if(a%2==0){
		cout<<"even"<<endl;
	}
	else{
		cout<<"odd"<<endl;
	}
}
void arr_input(int arr[],int n){
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
}
void arr_output(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
void reverse_arr(int arr[],int n){
	int s=0;
	int e=n-1;
	while(s<=e){
		int temp=arr[s];
		arr[s]=arr[e];
		arr[e]=temp;
		s++;
		e--;
	}
}
void string_reverse(string s){
	int start =0;
	int e=s.length()-1;
	while(start<=e){
		char temp=s[start];
		s[start]=s[e];
		s[e]=temp;
		start++;
		e--;
	}
	cout<<s<<endl;
}
void is_prime(int number){
	for(int i=2;i<number;i++){
		if(number%i==0){
			cout<<"isPrime"<<endl;
		}
		else{
			cout<<"NotPrime"<<endl;
		}
	}
}
int main() {
	// your code goes here
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL) ;
	int t,arr[100];
	cin>>t;
	while(t--){
		string_reverse("nisarg");
		
	}

	
	return 0;
}
