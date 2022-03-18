//this program is for finding maximum subarray sum
// complexity is O(n^3)
#include<iostream>
#include<vector>
using namespace std;

int main(){
   
  vector<int> arr = {1,-2,3,4,4,-2};
  
  int largest_sum = -1;
	
	for(int i = 0;i<arr.size();i++){
		for(int j = i;j<arr.size();j++){
            //find sum of current subarray
			int current_sum = 0;
			for(int k =i;k<=j;k++){
				current_sum += arr[k];
			}
			//it is check whether the current sum is larger than the largest sum or not
			//largest_sum = max(largest_sum,current_sum); it is short function for checking
			if (current_sum>largest_sum)
			{
				largest_sum=current_sum;
			}
		}
	}
	return largest_sum;



}