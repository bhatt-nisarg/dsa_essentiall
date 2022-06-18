#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	   	int arr[n];
	   	for(int i=0;i<n;i++){
	   		cin>>arr[i];
	   	}
	   	int minus_count =0 ;
	   	int pos_count =0;
	   	for(int i=0;i<n;i++){
	   		if(arr[i]==-1){
	   			minus_count++;
	   		}
	   		else{
	   			pos_count++;
	   		}
	   	}
	   	if(pos_count==minus_count){
	   		cout<<0<<endl;
	   	}
	   	else if(pos_count>0 and minus_count==0){
	   		cout<<pos_count/2<<endl;
	   	}
	  	else if(pos_count==0 and minus_count>0){
	  		cout<<minus_count/2<<endl
	  	}
	   	else if((pos_count>minus_count)or(pos_count<minus_count)){
	   		cout<<abs(pos_count-minus_count)<<endl;
	   	}
	   	else{
	   		cout<<-1<<endl;
	   	}
	   	
	   	
	}
	return 0;
}
