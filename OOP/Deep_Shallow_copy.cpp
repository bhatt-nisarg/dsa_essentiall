//Shallow and deep copy of constructor
/*when to create user  defined copy Constructor?
The compiler created copy constructor works fine for most cases.
We need to define our own copy constructor only if an object has pointers to dynamically allocated objects,iea deep copy of object is needed

shallow copy in shallow copy we have same bucket for name or any array and it saves address of the bucket it means if we modify name in one side it automatically change in other call;
we use deep copy when we have dynamically array which is use pointer  to point same bucket when and in deep copy we use our own user defined copy constructor
*/
#include<iostream>
#include <string.h>
using namespace std;

//Product shopping website
class Product{
private:
	int id;
	char *name;
	int mrp;
	int selling_price;
public:
	//constructor
	Product(){
		cout<<"Hello Bhai it is Your Constructor"<<endl;
	}
	//Parameterised Constructor
	Product(int id,char *n,int mrp,int selling_price){
		this->id = id;
		name = new char[strlen(n)+1];
		strcpy(this->name,n);
		this->mrp=mrp;
		this->selling_price=selling_price;
	}

	//make one copy constructor which is shallow copy
	//this ia shallow copy constructor in which name is name is point to a same heap location
	/*Product(Product &x){
		id = x.id;
		name = x.name; //name is a pointer which is pointing to one location 
		mrp = x.mrp;
		selling_price = x.selling_price;
	}*/

	//Now we  make a deep copy which is create for all name new array using dynamic memory
	Product(Product &x){
		id = x.id;
		// first create one new array of size as x.name and +1 is for null character
		name = new char[strlen(x.name)+1];
		//the after copy from  x.name in this name;
		strcpy(name,x.name);
		mrp = x.mrp;
		selling_price = x.selling_price;
	}
	//setter method
	void setmrp(int p){
		if(p>0){
			mrp = p;
		}
	}
	void setSellPrice(int p){
		if(p>mrp){
			selling_price = mrp;
		}
		else{
			selling_price=p;
		}
	}
	void setname(char *nam){

		strcpy(this->name,nam);
	}
	//Show details method
	void showDetails(){
		cout<<"ID "<<id<<endl;
		cout<<"Name "<<name<<endl;
		cout<<"MRP "<<mrp<<endl;
		cout<<"Selling Price "<<selling_price<<endl;
		cout<<"-----------------------"<<endl;
	}
};

int main(){
	Product Dhoom(1,"KTM",100000,90000);
	Product Dhoom2(Dhoom);
	Dhoom2.setmrp(1200000);
	Dhoom2.setname("HelloDhoom");

	Dhoom.showDetails();
	Dhoom2.showDetails();
		
}