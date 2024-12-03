#include <iostream>
using namespace std;
int main (){
    int row;
    int col;
    cout << "enter no coloumns :";
    cin >> col;
    cout << "enter no of rows :";
    cin >> row;
    for (int i=0;i<col;i++){
        for (int j=0;j<row;j++){
            cout <<"* ";
        }
        cout << endl;
    }
}