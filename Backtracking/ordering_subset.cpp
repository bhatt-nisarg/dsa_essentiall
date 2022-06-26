//First problem: find subset of given string(with ordering list)
//for finding subset we have 2^(Number //of letter) subset for any particular //string
//Input : abc
//Output :"",a,b,c,ab,ac,bc,abc 

//for ordering subset we just take one empty vector of string and store all output in the vector and after all the output are done we sort a vector using sort function
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//we have to sort using lexicography and as per string length
//then we can use custom comparator
bool compare(string a,string b){
	if(a.length()==b.length()){
		//if both length is same then we can use lexicography order
		return a<b;
	}
	//other wise using length wise sorting
	return a.length()<b.length();
}
void findSubsets(char *intput,char *output,int i,int j,vector<string> &list){
	//base case : if array of index is null
	if(intput[i]=='\0'){
		output[j] = '\0';
		string temp = output;
		list.push_back(temp);
		return;
	}
	//recursive case 
	//Include ith index
	output[j] = intput[i];
	findSubsets(intput,output,i+1,j+1,list);
	//Exclude the ith letter
	findSubsets(intput,output,i+1,j,list);
}
int main(){
	char intput[100];
	char output[100];
	vector<string> list;
	cin>>intput;
	findSubsets(intput,output,0,0,list);
	
	sort(list.begin(),list.end(),compare);

	//print list
	for(auto s:list){
		cout<<s<<",";	 
	}
}