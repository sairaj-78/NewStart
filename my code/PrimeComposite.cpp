#include<iostream>
using namespace std;
int main (){
    int n;
    cout<< "plaese enter a number:";
    cin >>n;
    for (int i=2;i<n;i--){
        if (n%i != 0 ){ cout <<"no is prime";}
        else {cout<<"no is composite";}
        break;
    }
}