#include <iostream>
using namespace std;
int main (){
    cout << "please give input following values of ap"<<endl;
    cout <<"enter a(first no):";
    int a ;
    cin >> a;
    cout << "give the r(common difference):";
    int r;
    cin >> r;
    cout << "give the value of n(no of term):";
    int n;
    cin >> n;
    int m= (n-1)*(r);
    cout << m+a;

    
}


