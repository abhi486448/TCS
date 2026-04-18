#include<bits/stdc++.h>
using namespace std;

int FibonacciNum(int n){
    if(n<=1) return n;

    return FibonacciNum(n-1) + FibonacciNum(n-2);

    // Time Complexcity
        // O(2^n)

        //because for f(n)= f(n-1) + f(n-2) for everu n it runs two times
}

int main (){
    int n;
    cin>>n;
    cout<<FibonacciNum(n)<<endl;

    return 0;
}