#include<bits/stdc++.h>
using namespace std;

/*
A achool has following rules for grading system:
a. BElow 25 - F
b. 25 to 44 - E
c. 45 to 49 - D
d. 50 to 59 - C
e. 60 to 79 - B
f. 80 to 100 - A
Ask user to enter marks amd pring the corresponding grade.
*/

int main (){
    int marks;
    cin >> marks;

    if (marks <= 100 && marks >=80) { // "If this condithin is true the rest will not exicuted only this will exicute "Because of else if" and save out time"
        cout << "A";
    }
    else if (marks <= 79 && marks >=60) {
        cout << "B";
    }
    else if (marks <= 59 && marks >=50) {
        cout << "C";
    }
    else if (marks <= 49 && marks >=45) {
        cout << "D";
    }
    else if (marks <= 44 && marks >=25) {
        cout << "F";
    }
    else if (marks < 25) {
        cout << "F";
    }
    else {
        cout <<"Error";
    }
    return 0;
}