/*

* 
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*


*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    /*
    for(int row=1;row<=n;row++){
        for(int col= 1;col<=row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int row = 1;row<n;row++){
        for(int col = 1;col<n-row+1;col++){
            cout<<"* ";
        }
        cout<<endl;

    }
        */

    for(int row = 1;row<=2*n-1;row++){
            int totalCols = row > n ? 2 * n - row  : row;
            for(int col = 1 ;col<=totalCols;col++){
                cout<<"* ";
            }
            cout<<endl;
    }

}