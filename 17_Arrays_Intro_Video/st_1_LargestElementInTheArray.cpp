#include<bits/stdc++.h>
using namespace std;

// Brout
    // 1. Sort the array
    // 2. Print the last element
    // TC = O(n log n)

// Better
    // No

// Optimal
    int largestElement(int arr[],int n){
        int largest = arr[0];
        for(int i=0; i<n; i++){
            if(arr[i]>largest){
                largest = arr[i];
            }
        }
        return largest;
    }
    // TC = O(n)

int main (){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    cout<<"Largest Element is: "<<largestElement(arr, n);
    return 0;
}