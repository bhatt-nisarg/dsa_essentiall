// Defense Kingdom

/* 
 Theodore implements a new strategy game "Defence of a kingdom". On Each level a player defends the kingdom that is represented by a rectangular grid of cells. The player builds cross towers in some cells of the grid. The tower defencds all the cells in the same row and the same column. No two towers share a row or a column.

 The penalty of the position is the number of cells in the largest undefended rectangle for example,the position shown on the picture has penalty 12


 Task: your task is to find the penalty of the give position.



 Input Format : in the function an width and height of the kingdom and a vector of pairs representing positions of towers is passes.

 Output Format: Return an integer representing the number of cells in the largest rectangle that is not defended by the towers

 Sample Input : 15 8
                {(3,8),(11,2),(8,6)}
 Sample Output : 12

 */

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    //here we take width height and number of tower 
    int width,height,numoftower;

    printf("Enter the width: \n");
    cin>> width;
    printf("Enter the height: \n");
    cin>>height;
    printf("Enter the number of tower\n");
    cin>>numoftower;

    //here we make vector for add width(w) and height(h) of the tower
    vector<int> w,h;

    w.push_back(0);
    h.push_back(0);

    for(int i =0;i<numoftower;i++){
        int x,y;
        printf("Enter width and height of the %d index : \n",i);
        cin>>x>>y;
        w.push_back(x);
        h.push_back(y);
    }
    w.push_back(width+1);
    h.push_back(height+1);

    sort(w.begin(),w.end());
    sort(h.begin(),h.end());
    int maxw = 0,maxh = 0;
    for(int i =0;i<w.size();i++){

        //we find maximum diffrence between two cordinates
        maxw = max(maxw,w[i+1]-w[i]-1);
        maxh = max(maxh,h[i+1]-h[i]-1);
    }

    //multiply maximum width and height to get maximum undefend rectangle
    cout<<maxw*maxh<<endl;

    return 0;


}
