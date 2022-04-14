//optimized bubble sort

/*
in simple bubble sort algorithm, the time complexity will remain O(n^2) every time,even if the array is already sorted
task is to optimized bubble sort such that its best case time complexity becomes O(n)

Input Format
	in the function an integer vector is passed.

Output Format:
	Return an integer vector in non decreasing order

sample Input : {1,3,5,7,9}
sample output:{1,3,5,7,9}

*/

// #include<iostream>
// #include <vector>
#include<bits/stdc++.h>
using namespace std;

vector<int> optimizedBubbleSort(vector<int> v){
    // your code  goes here
    v = {10,12,5,4,1,3,2};
    // int i,j,n=v.size();
    // bool swapped;

    // for(int i =0 ;i<n-1;i++){
    //     swapped = false;
    //     for(int j =0;j<n-i-1;j++){
    //     	if(v[i]>v[i+1]){
    //     		swap(v[i],v[i+1]);
    //             swapped = true;
    //     	}
    //     }
    
    // //if no two elements were swapped by inner loop,then break
    // if(swapped==false)
    //     break;
    // }    
    int n = v.size();
    int left = 0,right = n-1;
    int result[n];

    for(int index = n-1;index>=0;index--){
        //check if abs(arr[left] is greter than arr[right])
        if(abs(v[left]>v[right])){
            result[index] = v[left] * v[left];
            left++;

        }
        else{
            result[index] = v[right] * v[right];
            right--;
        }
        for(int i =0;i<n;i++){
            v[i] = result[i];
        }
    }
    return v;
    
}	
