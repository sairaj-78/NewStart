#include<iostream>
using namespace std;
int main(){
    cout << "enter no of the rows/col :";
    int user;
    cin >> user;

        int row,col;

    for (row = 1; row<=user; row++)
    { 
        for (col = row;col>0;col--)
        {
            cout<< col<<' ';
        }
        cout << endl;
    }

}