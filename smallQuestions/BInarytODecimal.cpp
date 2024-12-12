#include <iostream>
using namespace std;
int main (){
    int n,ans=0,mul=1,rem;
    cout << "enter a binary number :";
    cin >> n;
    
    while (n>0){
        rem=n%10;
        ans =mul*rem+ans;
        mul*=2;
        n/=10;
    }
    cout << "the decimal value is :"<< ans;
}