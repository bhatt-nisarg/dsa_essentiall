// //Copy Constructor
// -Creates a copy of given object
// -Intialise an object using another object of the same class

// //Syntax 
// Class_name (const class_name &object_name)
#include<iostream>
#include<string.h>
using namespace std;

class Product{
	int id;
	char name[100];
	int mrp;
	int selling_price;
public:
	Product(int id,char *n,int mrp,int selling_price){
		this->id = id;
		strcpy(name,n);
		this->mrp = mrp;
		this->selling_price=selling_price;
	}
	//copy constructor
	//instead of make copy of object we pass reference of a object in a constructor
	//we can make our custom constructor of just use default which we not have to made
	/*Product(Product &x){
		id = x.id;
		mrp=x.mrp;
		selling_price = x.selling_price;
	}*/
	

	//we make one function which show all details
	void showDetails(){
		cout<<"id "<<id<<endl;
		cout<<"Name "<<name<<endl;
		cout<<"MRP "<<mrp<<endl;
		cout<<"Selling Price "<<selling_price<<endl;
		cout<<"---------------------"<<endl;
	}

};
int main(){
	Product camera(101,"GoProHero9",28000,26000);
	//this is first copy constructor
	Product webCam(camera);
	// this is second copy constructor
	Product handyCam = camera;
	camera.showDetails();
	webCam.showDetails();
	handyCam.showDetails();
}

// here is one question that both copy construtor are working fine without define copy constructor then why we need to define copy constructor? 