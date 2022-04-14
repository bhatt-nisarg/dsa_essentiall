 //array in c++
#include<iostream>
using namespace std;
int main(){
    int marks[100]= {-1};

    int n ;
    cout<<"enter the no of students\t";
    cin>>n;

    //Input
    
    for(int i=1; i<=n; i++)
    {
        cin>>marks[i];
        marks[i]= marks[i]*2;
    }

    //output
    for(int i=0; i<=n;i++){
        cout<< marks[i] <<",";
    }
    
    cout <<endl;
    return 0;
}
