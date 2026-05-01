#include<bits/stdc++.h>
using namespace std;
// Brout
    void removeDuplicatesFSA(int arr[],int n){
        set<int> st;
        for(int i=0; i<n; i++){
            int num = arr[i];
            st.insert(num);
        }

        int idx=0;
        for(auto S : st){
            arr[idx] = S;
            idx++;
        }
    }

    // TC = O((n log n) + (n))
    // SC = o(n)

// Better
    // No

// Optimal
    int BremoveDuplicatesFSA(int arr[],int n){
        int i=0;
        for(int j=1; j<n; j++){
            if(arr[i] != arr[j]){
                arr[i+1] = arr[j];
                i++;
            }
        }
        return i+1;
    }

    // TC = O(n)


int main (){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    // removeDuplicatesFSA(arr, n);
    // for(int i=0; i<n; i++) cout<<arr[i]<<" ";

    int Size = BremoveDuplicatesFSA(arr, n);
    for(int i=0; i<Size; i++) cout<<arr[i]<<" ";
    return 0;
}