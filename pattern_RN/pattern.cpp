#include<bits/stdc++.h>
using namespace std;
//1
void pattern() {
    for(int r=1; r<=5; r++) {
        for(int c=1; c<=5; c++) {
            cout <<"* ";
        }
        cout <<endl;
    }
}

//10
void print10() {
    for(int r=1; r<=4; r++) {
        for(int c=1; c<=5; c++) {
            cout <<"10"<<" ";
        }
        cout <<endl;
    }
}

//1 1 1 1 1
//2 2 2 2 2
//3 3 3 3 3
//4 4 4 4 4
//5 5 5 5 5
void print1() {
    for(int r=1; r<=5; r++) {
        for(int c=1; c<=5; c++) {
            cout <<r<< " ";
        }
        cout <<endl;
    }
}

//1 2 3 4 5
//1 2 3 4 5
//1 2 3 4 5
//1 2 3 4 5
//1 2 3 4 5
void print1to5(){
    for(int r=1; r<=5; r++) {
        for(int c=1; c<=5; c++) {
            cout << c <<" ";
        }
        cout <<endl;
    }
}

//5 4 3 2 1
//5 4 3 2 1
//5 4 3 2 1
//5 4 3 2 1
//5 4 3 2 1
void print5to1() {
    for(int r=1; r<=5; r++) {
        for(int c=5; c>=1; c--) {
            cout <<c<<" ";
        }
        cout <<endl;
    }
}

//1 4 9 16 25
//1 4 9 16 25
//1 4 9 16 25
//1 4 9 16 25
//1 4 9 16 25
void print1to25(){
    for(int r=1; r<=5; r++) {
        for(int c=1; c<=5; c++) {
            cout <<c*c<< " ";
        }
        cout <<endl;
    }
}

/*
a a a a a 
b b b b b
c c c c c
d d d d d
e e e e e
*/
void printatoe() {
    for(char r='a'; r<='e'; r++) {
        for(int c=1; c<=5; c++) {
            cout << r <<" ";
        }
        cout <<endl;
    }

    //or

    // for(int r=1; r<=5; r++) {
    //     char name = 'a' + (r-1);
    //     for(int c=1; c<=5; c++) {
    //         cout << name <<" ";
    //     }
    //     cout <<endl;
    // }
}

/*
a b c d e 
a b c d e
a b c d e
a b c d e
a b c d e
*/
void printatoeinr() {
    for(int r=1; r<=5; r++) {
        for(char c='a'; c<='e'; c++) {
            cout << c <<" ";
        }
        cout <<endl;
    }
}

/*
 1  2  3  4  5
 6  7  8  9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
*/
void print1to25c() {
    int temp=1;
    for(int r=1; r<=5; r++) {
        for(int c=1; c<=5; c++) {
            // if(temp<10){
            //     cout<<" ";
            // }
            cout <<temp<<" ";
            temp++;
        }
        cout <<endl;
    }

    //or

    for(int r=1; r<=5; r++) {
        for(int c=1; c<=5; c++) {
            cout<<(r-1)*5+c<<" ";
        }
        cout <<endl;
    }
}
int main() {
    // pattern();
    // print10();
    // print1();
    // print1to5();
    // print5to1();
    // print1to25();
    // printatoe();
    // printatoeinr();
    print1to25c();
    return 0;
}