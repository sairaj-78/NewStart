#include<iostream>
using namespace std;
int main (){
    cout << "enter the no of row/col :";
    int userinp;
    cin >> userinp;

    int row,col;
    int i =1;
    for (row=1;row<=userinp;row++)
    {
        for (col=row;col<=userinp;col++)
        {
            cout << i<<' ';
            i=i+1;
        }
        
        i=1;
        cout << endl;
    }
}