#include<bits/stdc++.h>
using namespace std;

void rBubbleSort(int arr[],int n){
    if(n == 1) return;

    int didSwap = 0;

    for(int j=0; j<=n-2; j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j], arr[j+1]);
            didSwap = 1;
        }
    }
    
    if(didSwap == 0) return;

    return rBubbleSort(arr, n-1);
}

// Time Complexcity
    // worse case O(n^2)
    // best case O(n)

int main (){
    
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    
    int n = sizeof(arr)/sizeof(arr[0]);

    rBubbleSort(arr, n);

    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    return 0;
}