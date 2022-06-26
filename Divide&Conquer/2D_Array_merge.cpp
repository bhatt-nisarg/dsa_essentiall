//2D Array Merge
/*
implement merge sortvfor two-dimensional array. in case of odd dimension,the first division contains more number of elements than the second one.the complete execution of merge sort arranges the element in increasing order either moving row-wise or column-wise.
For Example,let there be a

4*4
4*4 two dimensional array.the complete process to be implemented is illustrated in Figure similarly other figure demonstrate the scenario for a

3*3
3*3 two dimensional array.one has to keep on dividing til a single element isremaining.during merging,first the row elements get sorted in increasing order followed by sorting of elements lying in the same column

*/
// #include<iostream>
// #include<vector>
// using namespace std;
// void merge_r(vector<vector<int>> &mat,int i,int cs,int cm,int ce){
// 	vector<int> sorted;
// 	int x= cs;
// 	int y = cs+1;

// 	while(x<=cm && y<=ce){
// 		if(mat[i][x]<mat[i][y]){
// 			sorted.push_back(mat[i][x]);
// 			x++;
// 		}
// 		else{
// 			sorted.push_back(mat[i][y]);
// 			y++;
// 		}
// 	}

// 	while(x<=cm){
// 		sorted.push_back(mat[i][x]);
// 		x++;
// 	}
// 	while(y<=ce){
// 		sorted.push_back(mat[i][y]);
// 		y++;
// 	}
// 	int k=0;
// 	for(int j = cs;j<=ce;j++){
// 		mat[i][j] = sorted[k];
// 		k++;
// 	}
// 	return;
// }
// void merge_c(vector<vector<int>> &mat,int j,int rs,int rm,int re){
// 	vector<int> sorted;
// 	int x = rs;
// 	int y = rm+1;
// 	while(x<=rm && y<=re){
// 		if(mat[x][j]<=mat[y][j]){
// 			sorted.push_back(mat[x][j]);
// 			x++;
// 		}
// 		else{
// 			sorted.push_back(mat[y][j]);
// 		}

// 	}
// 	while(x<=rm){
// 		sorted.push_back(mat[x][j]);
// 		x++;
// 	}
// 	while(y<=re){
// 		sorted.push_back(mat[y][j]);
// 	}

// 	int k =0;
// 	for(int i=rs;i<=re;i++){
// 		mat[i][j] = sorted[k];
// 		k++;
// 	}
// 	return;
// }

// void merge(int m,int n,vector<vector<int>> &mat,int rs,int rm,int re,int cs,int cm,int ce){
// 	//for sorting rows
// 	for(int i=rs;i<=re;i++){
// 		merge_r(mat,i,cs,cm,ce);
// 	}
// 	for(int j=0;j<=ce;j++){
// 		merge_c(mat,j,rs,rm,re);
// 	}
// 	return;
// }
// void merge_sort(int m,int n,vector<vector<int>> &mat,int rs,int re,int cs,int ce){
// 	//rs = row start re = row end
// 	//cs = column start ce = column end
// 	if(rs>=re && cs>=ce){
// 		return;
// 	}
// 	int rm = (rs+re)/2;  //rm= row mid
// 	int cm = (cs+ce)/2;  //cm = column mid

// 	//cout<<rs<<" "<<rm<<" "<<re<<" "<<cs<<" "<<cm<<" "<<ce<<endl

// 	//for dividing into subarrays
// 	merge_sort(m,n,mat,rs,rm,cs,cm);
// 	merge_sort(m,n,mat,rm+1,re,cs,cm);
// 	merge_sort(m,n,mat,rs,rm,cm+1,ce);
// 	merge_sort(m,n,mat,rm+1,re,cm+1,ce);


// 	//for merging sorted subarrays
// 	//it goes to merge function
// 	merge(m,n,mat,rs,rm,re,cs,cm,ce);
// 	return;
// }
// vector<vector<int>> d_merge_fun(int m,int n,vector<vector<int>> &v){
// 	merge_sort(m,n,v,0,m-1,0,n-1);
// 	return v;
// }
// int main(){
// 	vector<vector<int>> v = {
// 		{18,4,16,8},
// 		{23,13,20,11},
// 		{28,24,26,25},
// 		{1,30,15,19}
// 	};
// 	int m =4;
// 	int n = 4;
// 	vector<vector<int>> temp = d_merge_fun(m,n,v);
// 	for(int i=0;i<=m;i++){
// 		for(int x:temp[i]){
// 			cout<<x<<" ";
// 		}
// 		cout<<endl;
// 	}
	

// }





//other way to do thiis exercise
#include<bits/stdc++.h>
using namespace std;

void merge_row(vector<vector<int>> &mat,int i, int cs, int cm, int ce){
   vector<int> sorted;
   int x=cs;
   int y=cm+1;
   //cout<<x<<" "<<cm<<" "<<y<<" "<<ce<<endl;
   while(x<=cm && y<=ce){
       if(mat[i][x]<mat[i][y]){
           sorted.push_back(mat[i][x]);
           x++;
       }
       else{
           sorted.push_back(mat[i][y]);
           y++;
       }
   }
   
   
   while(x<=cm){
       sorted.push_back(mat[i][x]);
       x++;
   }
   while(y<=ce){
       sorted.push_back(mat[i][y]);
       y++;
   }
   int k=0;
   for(int j=cs; j<=ce; j++){
       mat[i][j]=sorted[k];
       k++;
   }
   return;
}
void merge_col(vector<vector<int>> &mat,int j, int rs, int rm, int re){
       vector<int> sorted;
   int x=rs;
   int y=rm+1;
   while(x<=rm && y<=re){
       if(mat[x][j]<mat[y][j]){
           sorted.push_back(mat[x][j]);
           x++;
       }
       else{
           sorted.push_back(mat[y][j]);
           y++;
       }
   }
   while(x<=rm){
       sorted.push_back(mat[x][j]);
       x++;
   }
   while(y<=re){
       sorted.push_back(mat[y][j]);
       y++;
   }
   int k=0;
   for(int i=rs; i<=re; i++){
       mat[i][j]=sorted[k];
       k++;
   }
   return;
}


void merge(int m, int n, vector<vector<int>> &mat, int rs, int rm, int re,int cs, int cm, int ce){
    
    
    
    //for sorting rows
    for(int i=rs; i<=re; i++){
        merge_row(mat,i,cs,cm,ce);
    }
    
    //for sorting columns
    for(int j=cs; j<=ce; j++){
        merge_col(mat,j,rs,rm,re);
    }
    return;

}

void merge_sort(int m, int n, vector<vector<int>> &mat, int rs, int re, int cs, int ce){
    //cout<<rs<<" "<<re<<endl;
    //cout<<cs<<" "<<ce<<endl;
     if(rs>=re && cs>=ce){
         return;
     }


     int rm=(rs+re)/2;
     int cm=(cs+ce)/2;
      
    // cout<<rs<<" "<<rm<<" "<<re<<" "<<cs<<" "<<cm<<" "<<ce<<endl; 
     
     
     //for dividing into subarrays
     merge_sort(m,n,mat,rs,rm,cs,cm);
     merge_sort(m,n,mat,rm+1,re,cs,cm);
     merge_sort(m,n,mat,rs,rm,cm+1,ce);
     merge_sort(m,n,mat,rm+1,re,cm+1,ce);

     
    //for merging sorted subarrays
     merge(m,n,mat,rs,rm,re,cs,cm,ce);
     return;
}

vector<vector<int>> mergeSort(int m, int n, vector<vector<int>> v){
    merge_sort(m,n,v,0,m-1,0,n-1);
    return v;
}
int main(){
	vector<vector<int>> v = {
		{18,4,16,8},
		{23,13,20,11},
		{28,24,26,25},
		{1,30,15,19}
	};
	int m =4;
	int n = 4;
	vector<vector<int>> temp = mergeSort(m,n,v);
	for(int i=0;i<=m;i++){
		for(int x:temp[i]){
			cout<<x<<" ";
		}
		cout<<endl;
	}
	

}