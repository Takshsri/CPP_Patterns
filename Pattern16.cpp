/*

         4 4 4 4 4 4 4  
         4 3 3 3 3 3 4   
         4 3 2 2 2 3 4   
         4 3 2 1 2 3 4   
         4 3 2 2 2 3 4   
         4 3 3 3 3 3 4   
         4 4 4 4 4 4 4 


*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int size = 2*n-1;
    for(int row = 1;row<=size;row++){
        for(int col = 1;col<=size;col++){
            int top = row-1;
            int left = col-1;
            int bottom = size - row;
            int right = size - col;
            int minDIst = min(min(right,left),min(top,bottom));
            cout<<n-minDIst<<" ";
        }
        cout<<endl;
    }
}