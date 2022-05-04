/*problem  : Read N strings and print the largest string. Each string can have upto 1000 characters.
*/
#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int n ;
	cin>> n;

	cin.get();//it is for consume the /n beacause when we give 3 and not write this then it will take three sentence with /n as one line that is blank line then 
	//we have to consume new line outer the loop therefore we use cin.get()

	char sentence[1000];
	char largest[1000];

	int largest_len = 0;

	while(n--){
		cin.getline(sentence,1000);
		//cout<< sentence << endl;
		int len = strlen(sentence);
		if(len>largest_len){
			largest_len = len;
			strcpy(largest,sentence);
		}
	}

	cout<< "Largest sentence is : "<<largest<<endl;
	return 0 ;
}