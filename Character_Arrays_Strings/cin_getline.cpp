//use of cin.getline() method to read whole line 

#include<iostream>
using namespace std;

int main(){
	char sentence[1000];

	//in cin.getline() method we have one more optional argument which say for this example it is '.' means it see this symbol it stopsand it print output
	//by default this value is '/n' because when you give nothing then it print output when you hit an enter for new line
	
	cin.getline(sentence,1000,'.');

	cout<< sentence<<endl;
} 