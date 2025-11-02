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

// int Max(int num1, int num2) {
//     if(num1>=num2) return num1;
//     else return num2;
// }

// "if" we have ->
int Max(int num1, int num2) { //" There in no else "
    if(num1>=num2) {
        return num1;
    }
    // " Always return something"
    // return num2;
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    // int minimum = min(num1, num2); // " The libreary math.h give some functions like min and max"
    // cout << minimum << endl;
    //" Same as Max"
    // int maximum = max(num1, num2);
    // cout << maximum << endl;
    int maximum = Max(num1, num2);
    cout << maximum <<endl;

    return 0;
}