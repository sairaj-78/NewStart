#include <iostream>
using namespace std;
int main (){
  int n ;
  cout << "enter a number(without having digit zero) :";
  cin >> n;
  int last =1;
  int product=1;
  while (n != 0){
    last = n%10;
    product = product * last;
    n = n / 10;
  }
  if (product != 0)
  {cout << "the product of numbers is :"<< product;}
    else {cout << "you have entered a invalid entry";}
}