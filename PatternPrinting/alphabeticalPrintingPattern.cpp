#include<iostream>
using namespace std;
int main (){
    cout << "enter the last alphabet of series :";
    char user;
    cin >> user;
    int userInt = (int)user;

    int row,col;
    for (row=65;row<=userInt;row++){
        
        for (col=65;col<=row;col++)
        
        {char final=(char)row;
            cout << final<<' ';}
        
        cout << endl;
    }
}