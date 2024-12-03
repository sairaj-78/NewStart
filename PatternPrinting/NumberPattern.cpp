#include <iostream>
using  namespace std;
int main (){
    cout << "enter the no of rows";
    
    int imp;
    
    cin >> imp;

    int row,col;
    
    for (row =1;row <= imp;row++){

        for (col=1;col<=row;col++)
        {
            cout << col<<" ";
        }

        cout << endl;
    }
    
}