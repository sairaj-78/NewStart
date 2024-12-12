#include<iostream>
using namespace std;
int main (){
    cout << "ente number of row/col :";
    int input;
    cin >> input;
        
        int row,col;

        for (row=1;row<=input;row++){
            for (col=1;col<=(input-row);col++){
                cout << "  ";
            }
            for(int j=1;j<=row;j++){
                cout << j<< " ";
            }
        cout << endl;  
        }  
}