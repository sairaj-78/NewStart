#include <iostream>
using namespace std;
int main (){
    cout << "enter the number :";
    int num;
    cin >> num;

    int rem;
    int bin=0;
    int mul=1;
    int final;

    while (num>0){
        rem=num%2;
        bin=rem*mul+bin;
        mul *=10; 
        final = bin;
        num/=2;
    }

    cout <<"The binary value is :"<< final;
}