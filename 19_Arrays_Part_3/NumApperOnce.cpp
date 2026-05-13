#include<bits/stdc++.h>
using namespace std;

// Brut
    int BRnumApperOnce(int arr[], int n){
        for (int i = 0; i < n; i++)
        {
            int num = arr[i];
            int count=0;
            for(int j=0; j<n; j++){
                if(j==i) continue;
                if(arr[j]==num){
                    count++;
                }
            }
            if(count==0){
                return num;
            }
        }
        return -1;
        
    }

    // TC = O(n*n)
    // SC = O(1)

// Better
    int BTnumApperOnce(int arr[],int n){
        unordered_map<int,int> mpp;

        for(int i=0; i<n; i++){
            mpp[arr[i]]++;
        }

        for(auto m:mpp){
            if(m.second==1){
                return m.first;
            }
        }

        return -1;
    }

    // m = n/2 + 1
    // TC = O(n log m + m)
    // SC = O(m)

// Optimal

    int OPnumApperOnce(int arr[],int n){
        int XOR = 0;

        for(int i=0; i<n; i++){
            XOR^=arr[i];
        }
        return XOR;
    }

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    // cout<<"Appers Once: "<<BRnumApperOnce(arr,n);

    // cout<<"Appers Once: "<<BTnumApperOnce(arr,n);

    cout<<"Appers Once: "<<OPnumApperOnce(arr,n);
    return 0;
}