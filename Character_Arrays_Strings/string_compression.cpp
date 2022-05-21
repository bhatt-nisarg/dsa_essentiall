//string compression  

/*

	decription : Given an array of characters chars, compress it using the following algorithm:


	algorithm:
	begin wiht an empty string s. for each group of consecutive repeating characters in chars:
		->  if the group's length is 1, 		append the characterr to s.

		-> otherwise, append the characterr 	followed by the group's length.

		the compressed string s should not be returned separately,but instead be stored in the input character array chars. Note thea group length that are 10 or longer will be split into multiple character in chars

		After you done modifying the input array, return the new length of the array.
		you must write an algorithm that uses only one constant extra space.

		Input Format 
		in the function a vector of character is passed

		output format
		return th updated vector



		Example 1: Input: chars = 	
			["a","a","b","b","c","c","c"]
					Output : return 6, and the first 6 characters of the inout array should be :
				["a","2","b","2","c","3"]
				Explanation : the groups are "aa","bb","ccc", this compress to "a2b2c3"

		Example 2 : Input: chars = ["a","b","b","b","b","b","b","b","b","b","b"]
		
		output : return 4, and the characters of the input array should be : ["a","b","1","2"]

		Explanation : the groups are "a" and "bbbbbbbbbbbb". this is compress to "ab12"		
*/	

// #include<iostream>
// #include<string>
// #include<vector>
// using namespace std;


// int main(){

// 	string chars ="abbbbbbbbb";

//     string s;
//     int n = chars.length();

    
//     for(int i =0;i<n;i++){
//         int count = 1;
        
//         while(i < n-1 and chars[i+1] == chars[i]){
//             count++;
//             i++;
//         }
//         s += chars[i];
//         s += to_string(count);
//     }
//     cout<<s<<endl;

//     cout<<s.length();
//     return 0;
        

// }
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
	vector<char> chars = {'a','a','b','b','c','d','d','d'};
  // your code goes here
    string s;
    int count =1;
    int n = chars.size();
    
    for(int i =0;i<n;i++){
    
        
        while(i < n-1 and chars[i+1] == chars[i]){
            count++;
            i++;
        }
        s += chars[i];
        if(count ==1){
            continue;
        }
        s += to_string(count);
        count = 1;
    }
    cout<<s<<endl;
    return s.size();
}