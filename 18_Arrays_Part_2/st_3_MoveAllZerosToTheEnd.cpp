#include<bits/stdc++.h>
using namespace std;

// Brout
    void moveZerosToEnd(int arr[],int n){
        vector<int> temp;
        for(int i=0; i<n; i++){
            if(arr[i] != 0){
                temp.push_back(arr[i]);
            }
        }

        for(int i=0; i<temp.size(); i++){
            arr[i] = temp[i];
        }

        for(int i=temp.size(); i<n; i++){
            arr[i] = 0;
        }
    }

    // TC = O(n)+ O(x) + O(n-x) = O(2n)
    // SC = O(x)

// Better
    // No

// Optimal
    void OPmoveZerosToEnd(int arr[],int n){
        int j=-1;
        for(int i=0; i<n; i++){
            if(arr[i]==0){
                j=i;
                break;
            }
        }

        if(j==-1) return;

        for(int i=j+1; i<n; i++){
            if(arr[i]!=0){
                swap(arr[j], arr[i]);
                j++;
            }
        }
    }

    // TC = O(x) + O(n-x) = O(n)
    // SC = O(1)


int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    // moveZerosToEnd(arr, n);

    OPmoveZerosToEnd(arr, n);

    for(int i=0; i<n; i++) cout<<arr[i]<<" ";

    return 0;
}