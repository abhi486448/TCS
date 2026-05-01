#include<bits/stdc++.h>
using namespace std;

// Brout
    // 1. Sort the array

    // 2. print second largest
    // for(int i=n-2; i>=0; i--){
    //     if(arr[i]!= largest){
    //         return arr[i];
    //     }
    // }

    // TC = O(n log n) + O(n)

// Better
    int secondLargestElement(int arr[],int n){
        int largest = arr[0];
        int SLargest = -1;
        for(int i=0; i<n; i++){
            if(arr[i]>largest){
                largest = arr[i];
            }
        }

        for(int i=0; i<n; i++){
            if(arr[i]>SLargest && (arr[i] != largest)){
                SLargest = arr[i];
            }
        }

        return SLargest;
    }

    // TC = O(2n)

// Optimal
    int OPsecondLargestElement(int arr[],int n){
        int largest = arr[0];
        int SLargest = -1;
        for(int i=0; i<n; i++){
            if(arr[i]>largest){
                SLargest = largest;
                largest = arr[i];
            }
            else if(arr[i]<largest && arr[i]>SLargest){
                SLargest = arr[i];
            }
        }

        return SLargest;
    }

    // TC = O(n)

int main (){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    cout<<"Largest Element is: "<<OPsecondLargestElement(arr, n);
    return 0;
}