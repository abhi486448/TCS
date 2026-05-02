#include<bits/stdc++.h>
using namespace std;

// Brout
    // No

// Better
    // No

// Optimal
    void rotateTheArray(int arr[],int n){
        int temp = arr[0];
        for(int i=1; i<n; i++){
            arr[i-1] = arr[i];
        }
        arr[n-1] = temp;
    }

    // TC = O(n)
    // SC = O(1) = extra space used
    // SC = O(n) = space used in algorithem

int main (){
    
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    rotateTheArray(arr, n);

    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    return 0;
}