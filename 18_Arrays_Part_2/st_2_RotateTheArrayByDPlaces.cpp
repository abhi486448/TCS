#include<bits/stdc++.h>
using namespace std;

// Brout
    void rotateArryByD(int arr[],int n,int d){
        int Rtime = d % n;
        int temp[Rtime];

        // step 1 take element to temp
        for(int i=0; i<d; i++){
            temp[i] = arr[i];
        }

        // step 2 swap
        for(int i=d; i<n; i++){
            arr[i-d] = arr[i];
        }

        // step put temp back to arr
        for(int i=n-d; i<n; i++){
            arr[i] = temp[i-(n-d)];
        }

    }

    // TC = O(d) + O(n-d) + O(d) = O(n+d)
    // SC = O(d)

// Better
    // No

// Optimal
    void OProtateArryByD(int arr[],int n,int d){
        reverse(arr, arr-d);
        reverse(arr+d, arr+n);
        reverse(arr, arr+n);
    }

    // TC = O(d) + O(n-d) + O(n) = O(2n)
    // SC = O(1)


int main (){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    int d;
    cin>>d;

    // rotateArryByD(arr, n, d);

    OProtateArryByD(arr, n, d);

    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    return 0;
}