#include <iostream>
using namespace std;
int main (){
    int x ;
    cout << "age of ram :";
    cin>>x;
    int y;
    cout <<"age of shyam";
    cin >>y;
    int z;
    cout<< "age of sairaj";
    cin >>z;
    if  (x>y){
        if (y>z){
            cout << "sairaj is younger";
        } 
        if (z>y){
            cout << "shyam is younger";
        }
    }
    if (x<y){
        if (x<z){
            cout << "ram is younger";
        }
        if (z<x){
            cout <<"sairaj is younger";
            }
        }        
    }
