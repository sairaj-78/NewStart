#include <iostream>
using namespace std;
int main (){
    int n ;
    cout << "enter a number:";
    cin >> n;
    int sum = 0 ;
    int last ;
    while (n != 0){
        last = n%10;
        sum = last + sum;
         n = n/10;
    }
    cout << "the sum of digits is :"<<sum;
 }