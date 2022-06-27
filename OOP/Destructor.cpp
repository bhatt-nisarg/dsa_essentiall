//Destructor - it also present in every class
/*
Example
class car{
	public:
		//destructor
		~car(){
		/* code for destroyed dynamically allocated memory */
	// 	}
	// };



/*
Function that is " called Automatically when an object is destroyed " ie object goes out of scope or destroyed explicitly by call to delete.
compiler provides a default destructor.
user defined destructor is needed when class contains pointers to dynamically allocated.


why we need destructor ?
 we use destructor to destroy memory dynamicaly if we not estroy dynamic memory then it cause a problem called "Memory leak" 
destructor is used for destroy at memory level
*/
#include<iostream>
#include<string.h>
using namespace std;

class people{
	char *name;
public:
	people(char *nam){
		name = new char(strlen(nam+1));
		strcpy(this->name,nam);
	}
	//it is make dynamically memory we have to delete using destructor
	people(people &x){
		name = new char[strlen(x.name)+1];
		strcpy(name,x.name);
	}
	~people(){
		cout<<"This deleting "<<name<<endl;
		//this below command is use for delete memory which is reference by this dynamic array
		//if we not writing this below code then it delete only the bucket in which we store location of the memory
		
		delete [] name;
		name = NULL;
	}
	void showDetails(){
		cout<<"Name "<<name<<endl;
		cout<<"--------------"<<endl;
	}
};
int main(){
	people p1("Nisarg");
	people p2(p1);
	// p2 = p1;
	p2.showDetails();
	p1.showDetails();
}
