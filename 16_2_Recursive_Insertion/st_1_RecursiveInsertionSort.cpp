#include<bits/stdc++.h>
using namespace std;

void rInsertionSort(int arr[],int i, int n){
    if(i == n) return;

    int j=i;

    while(j>0 && arr[j-1]>arr[j]){
        swap(arr[j-1], arr[j]);
        j--;
    }
    

    return rInsertionSort(arr, i+1, n);
}

// Time Complexcity
    // worse case O(n^2)
// Space Complexcity
    // O(n)

int main (){
    
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    
    int n = sizeof(arr)/sizeof(arr[0]);

    rInsertionSort(arr, 0, n);

    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    return 0;
}