#include<iostream>
using namespace std;
int main (){ 
    
    int col,row;
    int x,y;
    int user;
    cout << "ente height of no pyramid :";
    
    cin >> user;
    
    for (row=1;row<=user;row++){
        for (col=1;col<=(user-row);col++){
            cout << "  ";
        }
        for (x=1;x<=row;x++){
            cout << x<<' ';

        } 
    for (y=row-1;y>=1;y--){
        cout << y << ' ';
    }
    cout << endl;
           }

    }