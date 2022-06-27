//Product class
#include<iostream>
using namespace std;

//here by default all the data member are private we can make them public by give access modofier
class Product{
 private:
	int id;
	char name[100];
 public:	
	int mrp;
	int selling_price;
};

int main(){
	
	//make one object of product class 
	//without make an object class is just a prototype it not have any memory
	Product car;
	// car.name = "BMW";
	car.mrp = 1.5;
	car.selling_price = 1;
	//here we cant access the name of the car because it is in private access modifiers 
	cout<<"Car Price "<<car.mrp<<endl;
	cout<<"Car Selling price "<<car.selling_price<<endl;
}