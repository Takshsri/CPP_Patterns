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
    for(int row = 1;row<=n;row++){
          for(int space = n- row;space >=1 ;space--){
                cout<<" ";
          }
          for(int col= 1;col<=row;col++){
            cout<<"* ";
          }
          cout<<endl;
    }

    for(int row = 1;row<n;row++){
        for(int space = 1;space<=row ;space++){
            cout<<" ";
        }
        for(int col= n-row;col>=1;col--){
            cout<<"* ";
        }
        cout<<endl;
    }
}