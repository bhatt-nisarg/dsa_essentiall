//what is class and objects
/*
class is a blueprint
class=blueprint
"Blueprint that tells the compiler how to make an actual object"

Class -> Objects
So classes are needed to make objects in memory

*/
// car class
// car class has data member & member function
//date members to store information about the car
class car{
	int price;
	int model_id;
	char name[100];
}

//class = Data Members + Member Functions
class car{
	//these are ddata member which is by default private
	//privatte means data hiding
	int price;
	int model_id;
	char name[100];

//public is for expposing data to every one
	//public means access by every one
	//private ,public,protected,default all are access modifires
 public:
 	void show(){
 		//display details of car
 		cout<<"Name" <<name<<"Model"<<model;
 	}
 	void update_Price(){
 		//Logic...
 	}
}
