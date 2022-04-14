// Array K rotate Problem

//input
//{1,3,5,7,9}, x=2;

//outpur 
//{7,9,1,3,5}



#include<iostream>
#include<vector>
using namespace std;

vector<int> kRotate(vector<int> a, int k){
      vector<int> v;
    int n = a.size();
    k = k % n;
 
    for(int i = 0; i < n; i++)
    {
       if(i < k)
       {
           v.push_back(a[n + i - k]);
       }
       else
       {
           v.push_back(a[i - k]);
       }
    }
    return v;
    
}