#include <iostream>
using namespace std;
int main (){
    cout << "enter no of row/col :";
    int user;
    cin >> user;

    int row,col;
    for (row =1;row<=user;row++){
            for (col=row;col<=user;col++){
                cout << "* ";
            }
            cout << endl;
            
    }
}