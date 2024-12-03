#include <iostream>
using namespace std;
int main (){
    cout << "enter no of row/col :";
    int user;
    cin >> user;
    int pre=user;

    int row,col;
    for (row=1;row<=user;row++){
        for (col=1;col<=row;col++){
            cout <<pre<<' ';
            pre--; 
        }
        cout << endl;
        pre=user;
    }

}