//Copy Assignment Operator = 
/*
Assignment operator is called when an already initialized object is assigned a new value from another existing object.

*/
#include<iostream>
#include<string.h>
using namespace std;
class Product{
private:
	int id;
	char *name;
	int mrp;
public:
	Product(){
		cout<<"Hello it is Default"<<endl;
	}
	Product(int id,char *n,int mrp){
		this->id = id;
		name = new char[strlen(n)+1];
		strcpy(this->name,n);
		this->mrp = mrp;
	}
	//shallow copy
	Product(Product &x){
		id = x.id;
		name = new char[strlen(x.name)+1];
		strcpy(this->name,x.name);
		mrp = x.mrp;
	}
	//Method for copy Assignment Operator '='
	void operator=(Product &x){
		//all other  steps are same we have to use void operator= which is called copy assignment operator
		id = x.id;
		name = new char[strlen(x.name)+1];
		strcpy(this->name,x.name);
		mrp = x.mrp;
	}
	void setname(char *nam){
		strcpy(this->name,nam);
	}
	//Show details
	void showDetails(){
		cout<<"id "<<id<<endl;
		cout<<"Name "<<name<<endl;
		cout<<"MRP "<<mrp<<endl;
		cout<<"--------"<<endl;
	}
};
int main(){
	Product p1(1,"hello1",10);
	Product p2;
	p2 = p1; //this is copy assignment operator
	//p1 and p2 show details same because it is make shallow copy
	//to avoid this we have to make copy assignment operator using coppy assignment operator method
	p2.setname("hello2");
	p2.showDetails();
	p1.showDetails();

}