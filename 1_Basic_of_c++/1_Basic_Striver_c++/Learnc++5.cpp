#include<bits/stdc++.h>
using namespace std;
/*
Take the age from the user and then decide accordingly
1. If age <18,
    print-> not eligible for job
2. If age >=18,
    print-> "eligible for job"
3. If age >= 55 and age <= 57,
    print-> "eligible for job, but retirment soon."
4. If age > 57
    print-> "retirment time"
*/
int main (){
    int age;
    cin >> age;
    // if (age <18){
    //     cout << "not eligible for job";
    // }
    // else if (age <= 54){
    //     cout <<"eligible for job";
    // }
    // else if (age <= 57){
    //     cout <<"eligible for job, but retirment soon.";
    // }
    // else{
    //     cout<< "retirment time";
    // }

    // or

    // "Nested"
    if (age <18){
        cout << "not eligible for job";
    }
    else if (age <= 57){
        cout <<"eligible for job";
        if (age >=55){
            cout <<", but retirment soon.";
        }
    }
    else{
        cout<< "retirment time";
    }
    return 0;
}