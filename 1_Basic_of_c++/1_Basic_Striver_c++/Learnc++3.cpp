#include<bits/stdc++.h>
using namespace std;

// Write a program that takes an input of age
// and prints if you are adult or not
// >= 18 , Yes
// < 18 , No
int main (){
    int age;
    cin >> age;
    if(age >= 18) {
        cout << "you are an adult!";
    }
    // else {
    //     cout << "you are not an adult";
    // }

    // or
    
    else if(age < 18) {
        cout << "you are not an adult";
    }
    return 0;
}