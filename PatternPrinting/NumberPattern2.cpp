#include <iostream>
using namespace std ;
int main (){ 
    cout << "enter no of rows/colums";
    
    int user;

    cin >> user;

        int row,col;

        for (row=1;row<=user;row++)
        {
            for (col=1;col<=row;col++)
            {
                cout << row;
            }
            cout << endl;
        }
}