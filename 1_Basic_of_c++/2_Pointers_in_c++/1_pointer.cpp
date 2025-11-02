#include<iostream>
using namespace std;

int main() {
    //" Pointer"

    // int a = 10;
    // int* ptr = &a;

    // cout << ptr <<endl;
    // cout << &a <<endl; // " Both will be same"

    // cout << &ptr <<endl; //" But this will be diffrent"

    //float price = 100.25;
    // float* ptr2 = &price;

    // cout << ptr2 <<endl;
    // cout << &price <<endl;

    //" Pointer to pointer"

    int a = 10;
    int* ptr = &a;

    int** parptr = &ptr;

    // cout << ptr <<endl;
    // cout << &ptr <<endl;
    // cout << parptr <<endl;
    // cout << &parptr <<endl;

    cout << *(&a) <<endl;
    cout << *(ptr) <<endl;
    cout << ptr <<endl;
    cout << *(parptr) <<endl;
    cout << *(*parptr) <<endl;
    return 0;
}