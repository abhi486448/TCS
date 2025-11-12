#include<iostream>
using namespace std;

/*

*
* *
* * *
* * * *
* * * * *

*/
void pattern1() {
    for(int r=1; r<=5; r++) {
        for(int c=1; c<=r; c++) {
            cout <<"* ";
        }
        cout <<endl;
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
        for(int c=1; c<=r; c++) {
            cout<<c<<" ";
        }
        cout <<endl;
    }
}

/*
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/
void pattern3() {
    for(int r=1; r<=5; r++) {
        for(int c=1; c<=r; c++) {
            cout<<r<<" ";
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
    for(int r=1; r<=5; r++) {
        for(int c=r; c>=1; c--) {
            cout<<c<<" ";
        }
        cout<<endl;
    }
}

/*
a
b b
c c c
d d d d
e e e e e
*/
void pattern5() {
    char temp = 'a';
    for(int r=1; r<=5; r++) {
        for(int c=1; c<=r; c++) {
            cout<<temp<<" ";
        }
        temp++;
        cout<<endl;
    }
    //or
    for(int r=1; r<=5; r++) {
        char name = 'a';
        name = name + (r-1);
        for(int c=1; c<=r; c++) {
            cout<<name<<" ";
        }
        cout<<endl;
    }
}

/*

* * * * *
* * * *
* * *
* *
*

*/
void pattern6() {
    for(int r=5; r>=1; r--) {
        for(int c=1; c<=r; c++) {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    //or
    for(int r=1; r<=5; r++) {
        for(int c=1; c<=5-(r-1); c++) {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

/*
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/
void pattern7() {
    for(int r=1; r<=5; r++) {
        for(int c=1; c<=5-(r-1); c++) {
            cout<<c<<" ";
        }
        cout<<endl;
    }
}

/*
5
5 4
5 4 3
5 4 3 2
5 4 3 2 1
*/
void pattern8() {
    for(int r=5; r>=1; r--) {
        for(int c=5; c>=r; c--) {
            cout<<c<<" ";
        }
        cout<<endl;
    }
}

//hw

/*
1
1 2 
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6
1 2 3 4 5 6
*/
void hw1() {
    for(int r=1; r<=6; r++) {
        for(int c=1; c<=r; c++) {
            cout<<c<<" ";
        }
        cout<<endl;
    }
    for(int c=1; c<=6; c++) {
        cout<<c<<" ";
    }
}

/*
A
A B
A B C
A B C D
A B C D E
*/
void hw2() {
    for(int r=1; r<=5; r++) {
        for(int c=1; c<=r; c++) {
            char name='A'+(c-1);
            cout<<name<<" ";
        }
        cout<<endl;
    }
}

/*
10
10 11
10 11 12
10 11 12 13
10 11 12 13 14
10 11 12 13 14 15
*/
void hw3() {
    for(int r=10; r<=15; r++) {
        for(int c=10; c<=r; c++) {
            cout<<c<<" ";
        }
        cout<<endl;
    }
}

/*
A B C D E
A B C D
A B C
A B 
A
*/
void hw4() {
    for(int r=4; r>=1; r--) {
        for(int c=1; c<=r; c++) {
            char name='A'+(c-1);
            cout<<name<<" ";
        }
        cout<<endl;
    }
}

int main() {

    // pattern1();
    // pattern2();
    // pattern3();
    // pattern4();
    // pattern5();
    // pattern6();
    // pattern7();
    // pattern8();
    // hw1();
    // hw2();
    // hw3();
    hw4();
    return 0;
}