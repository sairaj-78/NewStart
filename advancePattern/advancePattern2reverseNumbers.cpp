#include <iostream>
using namespace std;
int main (){
    cout << "ente rthe input number :";
    int n;
    cin >> n;

    int row,col;

    for(row=1;row<=n;row++){
        
       for (col=1;col<=(n-row);col++){
        cout << "  ";
       }
        for (int j=row;j>=1;j--){
            
            cout << j<<' ';

        }
        cout << endl;
    } 


}