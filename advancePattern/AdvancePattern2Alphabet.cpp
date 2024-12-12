#include<iostream>
using namespace std;
int main (){
    cout  << "enter the last alphabet(capital) of pattern :";
    char input;
    cin >> input;
    int user =(int)input;

    int row,col;
    for (row=65;row<=user;row++){
        for (col=1;col<=user-row;col++){
            cout << "  ";
        }
        for (int j=65;j<=row;j++){
            char final=(char)j;
            cout << final << ' ';
        }
        cout << endl;
    }



}