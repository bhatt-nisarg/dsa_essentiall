//word spell
/*
you have input as number 
Input : 2021
and you have to convert as spell like this
Output : two zero two one
*/

#include<iostream>
using namespace std;
//one global string array which containing spell of word
string word[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

void Spell_word(int n){
	if(n==0){
		return;
	}
	int last_digit = n%10;
	Spell_word(n/10);
	cout<<word[last_digit]<<" ";
}

int main(){
	int n;
	cin>>n;
	Spell_word(n);
	return 0;

}