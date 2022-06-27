// Default Methods/Functions
/*
-Constructor
-copy constructor
-copy Assignment Operator
-Destructor

Constructor
-constructor Name = Class Name
-called Automatically when an object is created.
-Memory Allocation happens when constructor is called.
construcor is called only once each object.
Class car{
	public:
	 //car constructor
	 car(){}
}
*/
#include<iostream>
#include<string.h>
using namespace std;
class Product{
	int id;
	char name[100];
	int mrp;
	int selling_price;
public:

	//constructor : it use for object initialization 
	//constructor called when the object of that class is called
	//below out of one constructor called its depends  on the what type of object is created 
	//if object is parameterized then second  constructor is called otherwise first

	Product(){
		cout<<"this is void constructor"<<endl;
	}
	//Parameterized Constructor 
	Product(int id,char *name,int mrp,int selling_price){
		this->id = id;
		strcpy(name,name);
		this->mrp = mrp;
		this->selling_price=selling_price;
	}


	//setter method
	void setMrp(int p){
		if(p>0){
			mrp = p;
		}	
	}
	void setSellingPrice(int p){
		if(mrp<p){
			selling_price=mrp;
		}
		else{
			selling_price =p;
		}
	}
	//getter method
	int getmrp(){
		return mrp;
	}
	int getselling_price(){
		return selling_price;
	}

};
int main(){
	Product car(1,"BmW",2500000,1500000);
	cout<<"MRP "<<car.getmrp()<<endl;
	cout<<"SELLING PRICE "<<car.getselling_price();
}