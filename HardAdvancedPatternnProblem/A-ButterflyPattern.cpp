#include<iostream>
using namespace std;
int main(){
    cout << "enter user input :";
    int user;
    cin >> user ;

        int col,row;
        //first half
        for (row=1;row<=user;row++){

            //first stars pattern
            for (col=1;col<=row;col++){
                cout << "* ";
            }

            //spaces
            for (col=1;col<=(2*(user-row));col++){
                cout << "  ";
            }

            //ending star pattern
            for (col =1 ;col<=row;col++){
                cout << "* ";
            }
            cout << endl;

        }
        
        //lower part
        for (row = (user-1);row>=1;row--){
            //first star pattern
            for (col=1;col<=row;col++){
                cout << "* ";

            }

            for (col=1;col<=(2*user)-(2*row);col++){
                cout << "  ";
            }

             for (col=1;col<=row;col++){
                cout << "* ";

            }
            cout << endl;
          
        }




}