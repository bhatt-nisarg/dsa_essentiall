//getter and setters method

#include<iostream>
using namespace std;

class Product{
	
	//this all are by default private
private:
	int id;
	char name[100];
	int mrp;
	int selling_price;
//here we make some public method to set mrp and selling price (setter method) and get mrp and selling price (getter method)
public : 
	//setters method
	void setMrp(int price){
		if(price>0){
			mrp = price;
		}
	}	
	void setSellingPrice(int price){
		//we put check if price is greater then mrp then we set selling price as mrp
		// other wise we set selling price as price
		if(price>mrp){
			selling_price = mrp;
		}
		else{
			selling_price =price;
		}
	}
	//getter method to get data or any property
	int getMrp(){
		return mrp;
	}
	int getSellingPrice(){
		return selling_price;
	}


};
int main(){

	Product abc;
	abc.setMrp(100);
	abc.setSellingPrice(1000);  //it set selling price as mrp because mrp<price

	cout<<"MRP "<<abc.getMrp()<<endl;
	cout<<"Selling Price "<<abc.getSellingPrice()<<endl;



}