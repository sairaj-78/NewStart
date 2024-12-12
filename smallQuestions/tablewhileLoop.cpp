#include <iostream>
using namespace std;
int main (){
    int x;
    cout << "enter the input :";
    cin >> x;
    int y=1;

    while (y<=10){
        cout << y<<'*'<<x<<'='<< y*x << endl ;
        y++;
    }
        

}