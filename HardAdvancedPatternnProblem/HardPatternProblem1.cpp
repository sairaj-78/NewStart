#include <iostream>
using namespace std;
int main (){
    cout << "enter height of pyramid :";
    int x;
    cin >> x;

    int row , col;
    for (row=1;row<=x;row++){
        for (col=1;col<= (x-row);col++){
            cout << "  ";
        }for (int j=1;j<=((2*row)-1);j++){
            cout << "* ";
        }
        cout << endl;
    }
}