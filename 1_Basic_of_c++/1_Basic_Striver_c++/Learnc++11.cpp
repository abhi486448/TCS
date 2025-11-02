#include<bits/stdc++.h>
using namespace std;
// Functions are set of code which performs something for you
// Functions are ised to modularise code
// Functions are used to increase readability
// Functions are used to use same code multiple times
// void -> which does not return anything
// return
// parameterised
// non parameterised

// void printName() {
//     cout << "hey Striver!";
// }

void printName(string name) {
    cout << "hey " << name;
}

// " Take two number and print its sum "
// int sum(int num1, int num2) {
//     int num3 = num1 + num2;
//     return num3; 
// }
// " We can also do "
void sum(int num1, int num2) {
    int num3 = num1 + num2;
    cout << num3;
}
int main() {
    // string name;
    // cin >> name;
    // printName(name);

    // string name2;
    // cin >> name2;
    // printName(name2); // "increased usebility"


    // " Take two number and print its sum "

    int x, y;
    cin >> x >> y;
    // int res = sum(x, y); // " Then inseded of that we will just do"
    // cout << res;

    sum(x, y);

    return 0;
}