#include<iostream>
using namespace std;
int main (){
    cout << "enter input :";
    int user;
    int row,col;
    int x,y;
    cin >> user;
    int p;
    x=(2*user);

    //upper half of square
    for (row=user;row>=1;row--){
            //first half of upper square
            for (y=1;y<=row;y++){
                cout  << "* ";
            }

            for (p=1;p<=(user-row);p++){
                cout << "  ";
            }

            //second half of upper square
              for (p=1;p<=(user-row);p++){
                cout << "  ";
            }

              for (y=1;y<=row;y++){
                cout  << "* ";
            }
            cout << endl;

    }
    //lower half of square
    for (row =1;row<=user;row++){
        //first half of square

        for (p=1;p<=row;p++){
            cout << "* ";
        }
        for (y=1;y<=(user-row);y++){
            cout << "  ";
        }
        for (p=1;p<=user-row;p++){
            cout <<"  ";

        }
        for (y=1;y<=row;y++){
            cout << "* ";
        }
        cout <<endl;
    }
}