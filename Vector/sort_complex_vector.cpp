#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int calcTotalMarks(vector<int> marks){
	return marks[0]+marks[1]+marks[2];
}
bool compare(pair<string,vector<int>> 
s1, pair<string,vector<int>> s2){
	vector<int> m1 = s1.second;
	vector<int> m2 = s2.second;

	return calcTotalMarks(m1) > calcTotalMarks(m2);
}
int main(){
	vector<pair<string,vector<int> >> student_mark = {
		{"Nisarg", {10,12,40}},
		{"rohan" , {20,30,40}},
		{"vivek" , {100,100,100}},
		{"rujul" , {200,20,30}},
		};
	sort(student_mark.begin(),student_mark.end(),compare);

	for(auto s: student_mark	){
		cout<< s.first << " "<<calcTotalMarks(s.second)<<endl;
	}
}
