#include <iostream>
using namespace std;
int main (){
    int n;
    cout << "please enter a number:";
    cin >> n;
    int ld;
    int no = 0;
    while(n != 0)
    {  
        ld = n%10;
        no = (ld) + no*10;
        n=n/10;
    }
    cout << no;
}
