#include <iostream>
using namespace std;
int main (){
    int x;
    int y;
    char ch;
        cout << "enter operation in following format : (n1) {any arithematic operation} (n2)";
         cin >> x ;       
         cin >> ch;
         cin >> y;
        if (ch == '+'){cout << x+y;}
        else if (ch == '-'){cout << x-y;}
        else if ( ch == '*'){cout << x*y;}
        else if (ch =='/'){ cout << x/y;}
        else if ( ch != '+','-','*','/' ){cout << "invalid operation";}
}