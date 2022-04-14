#include<bits/stdc++.h>
using namespace std;

void  sortSquare(int arr[],int n){
    //first divide array into negative and positive part
    int k =0;
    for(k=0;k<n;k++){
    	if(arr[k]>=0){
    		break;
    	}
    }
    /* Now we do same process that we learnt in merge sort
    	to merge two sorted array here both two half are sorted ande we
    	traverse first half in reverse manner because first half contain negative elements
  */
  
  	int i = k-1;   // initial index of first half
  	int j =k;    // initial index of second half
  	int ind=0;  	//initial index of temp

  	//store sorted array
  	int temp[n];
  	while(i>=0 && j<n){
  		if(arr[i]*arr[i]<<arr[j]*arr[j]){
  			temp[ind] = arr[i] * arr[i];
  			i--;
  		}
  		else{
  			temp[ind] = arr[j] * arr[j];
  			j++;
  		}
  		ind++;
  	}
  	//copying the remaining element of first half
  	while(i>=0){
  		temp[ind] = arr[i] * arr[j];
  		i--;
  		ind++;
  	}

  	//copy the remaining element of second half 
  	while(j<n){
  		temp[ind] = arr[j] * arr[j];
  		j++;
  		ind++;
  	}

  	//copy 'temp' array into original array
  	for(int i =0;i<n;i++){
  		arr[i] = temp[i];
  	}
}	

//main program array initialization
int main(){
	int arr[] = {-6,-3,-1,2,4,5};
	int n = sizeof(arr)/sizeof(int);
	cout<<"Before sort" <<endl;
	for(int i =0;i<n;i++){
		cout<<arr[i]<<" ";}
		sortSquare(arr,n);
	
	cout<<"\nAfter Sort "<<endl;
	for(int i =0;i<n;i++){
		cout<<arr[i]<<" ";

	}
	return 0;
}