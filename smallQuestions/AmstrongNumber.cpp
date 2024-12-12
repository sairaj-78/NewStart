#include <iostream>
using namespace std;

// making function to tell number of digits

int nod(int p){
    int nods=0;
    while (p>0){
        p/=10;
        nods++;
    }
    return nods;
}

//making function to tell power of number

int power(int p,int nodss){
    int ans=1;
    int x=1;
    while (nodss>=x){
        ans=ans*p;
        x++;
    }
    return ans;

}

int main (){
    int a;
    cout << " enter a entry :";
    cin >> a;
    int backu=a;
    int nodss=nod(a);//we known no of digits in a
    int final=0;
    while (a>0){
        int rem;
        rem=a%10;
        int ans;
        ans=power(rem,nodss);//powered value for addition
        final=final+ans;//addition of powered values
        a/=10;
    }

        //finally tally if it is armstrong no or not:
        if (final ==backu ) cout <<"oh yes !!!!!!!";
        else cout << "no";
}