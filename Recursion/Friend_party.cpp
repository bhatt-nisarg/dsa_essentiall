//Friends' Party!
/*
given n friends, each one can remain single or can be paired up with some other friend.Each friend can be paired only once.Find out the total numbers of ways in which friends can remain single or can be paired up.


Input Format
in the function an integer N is passed as parameter.
Output Format
Return an integer representing the total no.of ways
Sample Input : 3
Sample Output : 4
Explanation : 
1,2,3 all single
1,(2,3): 1 is single and 2and3 is paired
(1,2),3 : 1,2 is paired and 3 is single
(1,3),(2):1 and 3 are paired but 2 is single;
*/
#include<iostream>
using namespace std;

int Friend_party(int n){
	//base case if lesthen 2 member then it is only one way which is single
	if(n<2){
		return 1;
	}
	//in recursive way if there if first friend deside to go alone then recurrence is 
	//First single(1) and(*) other is n-1 is deside using recursion
	//or(+) if First deside to go as couple(n-1) (*)and other deside by using function recursion which is (n-2)
	int no_way = Friend_party(n-1) +(n-1)* Friend_party(n-2);
	return no_way;
}
int main(){
	int n;
	cin>>n;
	cout<<Friend_party(n);
}