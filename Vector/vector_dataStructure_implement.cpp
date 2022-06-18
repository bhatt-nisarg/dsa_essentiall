#include<iostream>
#include "Vector.h"
using namespace std;
//in class make function as contsant if it is take constant 
//because in at function it accept int i but it is constant not increasing and not decreasing

//important thing is that all the constant function are not modified by datamember

int main(){

	vector<char> c;
	c.push_back('c');
	c.push_back('b');
	c.push_back('z');
	for(int i=0;i<c.size();i++){
		cout<<c[i]<<endl;
	}
	vector<int> v;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(15);
	v.push_back(6);
	v.pop_back();

	cout<<v.front()<<endl;
	cout<<v.back()<<endl;

	cout<<v.at(2)<<endl;
	cout<<v.size()<<endl;
	cout<<v.capacity()<<endl;

	for(int i=0;i<v.size();i++){
		cout<<v.at(i)<<",";
	}


}