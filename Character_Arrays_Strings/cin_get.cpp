//cin.get method to take input from the user  

#include<iostream>
using namespace std;

int main(){
	char sentence[100];

	char temp = cin.get();

	int len = 1;

	// while(temp != '#'){
	// 	len++;
	// 	cout<< temp;
	// 	//update the value of temp
	// 	temp = cin.get();
	// }
	// cout<<endl;
	// cout<<"Length "<<len << endl;

	//we can also try to take all input and after all input taken we print the output
	//we can use this method using the char array

	//this method is as follows

	
	while(temp != '\n'){
		sentence[len++] = temp;
		temp = cin.get();
	}
	//end array using null character
	sentence[len] = '\0';
	cout<<"Length"<<len<<endl;
	cout<< sentence <<endl;

	
}