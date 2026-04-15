#include<bits/stdc++.h>
using namespace std;

void PrintArray(int *arr, int n){
    if(n<0) return;
    PrintArray(arr, n-1);
    cout<<arr[n]<<endl;
}

void Reverse1(int *arr, int l, int r){
    if(l>=r) return;
    swap(arr[l], arr[r]);
    Reverse1(arr, l+1, r-1);
}

void Reverse2(int i, int *arr, int n){
    if(i>=n/2) return;
    swap(arr[i], arr[n-i-1]);
    Reverse2(i+1, arr, n);
}

int main (){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<=n-1; i++) cin>>arr[i];

    // Reverse1(arr, 0, n-1);
    Reverse2(0, arr, n);
    PrintArray(arr,n-1);

    return 0;
}