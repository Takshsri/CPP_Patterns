/*
          *****
         *   *
        *   *
       *   *
      *****


*/
/*

1 1 1 1 1 1
2 2 2 2 2
3 3 3 3
4 4 4
5 5
6



*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int row =1 ;row<=n;row++){
        for(int col = 1;col<=2*n-1;col++){
           if(col == n-row+1 || col==n-row+n){
            cout<<"*";
           }
           else if((row == 1 || row == n ) && col>n-row+1 && col<n-row+n){
            cout<<"*";
           }
           else{
            cout<<" ";
           }

            
        }
        cout<<endl;
    }

    for(int row = 1;row<=n;row++){
        for(int col = n-row+1;col>=1;col--){
            cout<<row<<" ";
        }
        cout<<endl;
    }
}