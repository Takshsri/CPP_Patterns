/*

          *      *
         *   *  *   *
       *      *      *


*/

#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    for(int row = 1;row<=n;row++){
        for(int col = 1;col<=n*n;col++){
            if(row%2==0){
                if((row+col)%2==0){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            else{
                if((row+col)%4==0){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
}