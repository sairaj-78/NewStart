#include<iostream>
using namespace std;
int main (){
    int user;
    int row,col;
    cout << "enter height of pyramid :";
    cin >> user;

    for (row =1;row<=user;row++){
            for (int j=1;j<row;j++){
                cout << "  ";
            }
            for (col=1;col<=(((user-row+1)*2)-1);col++){
                cout << "* ";
            }
            cout << endl;
    }

}