#include<bits/stdc++.h>
using namespace std;

/*
      *
    * *
  * * *
* * * *

*/
void pattern() {
    for(int r=1; r<=4; r++) {
        for(int c=4; c>r; c--) {
            cout<<"  ";
        }
        for(int c=1; c<=r; c++) {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

/*
      1
    2 2
  3 3 3
4 4 4 4
*/
void pattern1() {
    for(int r=1; r<=4; r++) {
        for(int c=1; c<=4-r; c++) {
            cout<<"  ";
        }
        for(int c=1; c<=r; c++) {
            cout<<r<<" ";
        }
        cout<<endl;
    }
}

/*
        1
      1 2
    1 2 3
  1 2 3 4
1 2 3 4 5
*/
void pattern2() {
    for(int r=1; r<=5; r++) {
        for(int c=1; c<=5-r; c++) {
            cout<<"  ";
        }
        for(int c=1; c<=r; c++) {
            cout<<c<<" ";
        }
        cout<<endl;
    }
}

/*
        A
      A B
    A B C
  A B C D
A B C D E
*/
void pattern3() {
    for(int r=1; r<=5; r++) {
        for(int c=1; c<=5-r; c++) {
            cout<<"  ";
        }
        for(int c=1; c<=r; c++) {
            char name = 'A'+(c-1);
            cout<<name<<" ";
        }
        cout<<endl;
    }
}

/*
        1
      2 1
    3 2 1
  4 3 2 1
5 4 3 2 1
*/
void pattern4() {
    int n;
    cout<<"Enter no.: ";
    cin>>n;

    for(int r=1; r<=n; r++) {
        for(int c=1; c<=n-r; c++) {
            cout<<"  ";
        }
        for(int c=r; c>=1; c--) {
            cout<<c<<" ";
        }
        cout<<endl;
    }
}

/*
      *
    * * *
  * * * * *
* * * * * * *

*/
void hw() {
    int n;
    cout<<"Enter no.: ";
    cin>>n;

    for(int r=1; r<=n; r++) {
        for(int c=n; c>r; c--) {
            cout<<"  ";
        }
        for(int c=1; c<=r; c++) {
            cout<<"*"<<" ";
        }
        if(r>1){
            for(int c=1; c<r; c++) {
                cout<<"*"<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){
    // pattern();
    // pattern1();
    // pattern2();
    // pattern3();
    // pattern4();
    hw();
    return 0;
}