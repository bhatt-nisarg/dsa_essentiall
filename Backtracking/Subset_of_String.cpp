//First problem: find subset of given string
//for finding subset we have 2^(Number //of letter) subset for any particular //string
//Input : abc
//Output :"",a,b,c,ab,ac,bc,abc 

//for ordering subset we just take one empty vector of string and store all output in the vector and after all the output are done we sort a vector using sort function
#include<iostream>
using namespace std;

void findSubsets(char *intput,char *output,int i,int j){
	//base case : if array of index is null
	if(intput[i]=='\0'){
		output[j] = '\0';
		if(output[j]='\0'){
			cout<<"NULL";
		}
		cout<<output<<endl;
		return;
	}
	//recursive case 
	//Include ith index
	output[j] = intput[i];
	findSubsets(intput,output,i+1,j+1);
	//Exclude the ith letter
	findSubsets(intput,output,i+1,j);
}
int main(){
	char intput[100];
	char output[100];
	cin>>intput;
	findSubsets(intput,output,0,0);
}