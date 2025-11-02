#include<bits/stdc++.h>
using namespace std;

int main() {
    // int arr[] = {1, 2, 3, 4, 5};

    // cout << *arr <<endl; //1
    // cout << *(arr+1) <<endl; //2
    // cout << *(arr+2) <<endl; //3
    // cout << *(arr+3) <<endl; //4

    //Subtract ptr
    // int arr[] = {1, 2, 3, 4, 5};

    // int* ptr2; //100
    // int* ptr1 = ptr2 + 2; //108

    // cout << ptr1 - ptr2 <<endl; //2

    //Compare (<,<=,>,>=,==,!=) ptr
    int* ptr1;
    // int* ptr2;
    int* ptr2 = ptr1;

    cout << ptr1 << endl;
    cout << ptr2 <<endl;

    // cout << (ptr1 < ptr2) <<endl; //1
    cout << (ptr1 == ptr2) <<endl; //1
    cout << (ptr1 != ptr2) <<endl; //1
    return 0;
}