#include<bits/stdc++.h>
using namespace std;

// void changeA(int a) { // Pass by value
//     a = 20;
// }
void changeA(int* ptr) { // Pass by reference using pointers
    *ptr = 20;
}
void changeA(int &b) { // Pass by reference using alias
    b = 20;
}
int main() {
    // int a = 5;
    // int *p = &a;
    // int **q = &p;

    // cout << *p << endl;
    // cout << **q << endl;
    // cout << p <<endl;
    // cout << *q <<endl;

    //" pass by refeerance (with help of pointer)"

    // int a = 10;

    // changeA(a);
    // changeA(&a);
    // changeA(a);
    // cout << "Inside Main fun: a -> " << a <<endl;

    //" Array Pointers"

    int arr[] = {1,2,3,4,5};

    cout << arr << endl;
    cout << *arr << endl;

    // If we do
    // int a = 15, b = 10;
    // int* ptr = &a;
    // ptr = &b; // This is allow

    //But
    // int a = 15;
    // arr = &a; // "This is not alow Because array pointer is cinstant they can not be modify"

    return 0;
}