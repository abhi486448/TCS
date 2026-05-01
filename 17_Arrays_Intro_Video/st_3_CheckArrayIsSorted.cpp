#include<bits/stdc++.h>
using namespace std;

bool checkArrayIsSorted(int arr[], int n){
    bool check;
    for(int i=0; i<n-1; i++){
        if(arr[i] <= arr[i+1]) check = true;
        else return false;
    }
    return check;
}

int main (){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    if(checkArrayIsSorted(arr, n)) cout<<"Yes";
    else cout<<"No";
    return 0;
}