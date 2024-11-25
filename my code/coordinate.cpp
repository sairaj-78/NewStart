#include <iostream>
using namespace std;
int main (){
   int x,y;
   cout <<" plz enter x coordinate:";
   cin >> x;
   cout <<"plz enter y coordinate:" ;   
   cin >> y;  
   if (x>0){
    if (y>0){cout << "coordinate is present in first quadrant";}
     else if (y<0){cout<< "coordinate is present in fourth quadrant";}}    
   else if (x<0){
    if (y>0){cout << "coordinate is present in second quadrant ";}
    else if (y<0) {cout << "coordinate is present in third quadrant ";}}
    else if (x==0 && y==0){
        cout << "the coordinate is present on origin";
    }
    }
    
    
     
