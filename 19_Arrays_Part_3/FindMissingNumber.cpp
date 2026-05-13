#include<bits/stdc++.h>
using namespace std;

// Brute

    int BRmissingNumber(int arr[],int size, int n){
        for(int i=1; i<=n; i++){
            int flag=0;
            for(int j=0; j<size; j++){
                if(arr[j]==i){
                    flag = 1;
                    break;
                }
            }
            if(flag==0){
                return i;
            }

        }
        return -1;
    }

    // TC = O(N*N)
    // SC = O(1)

// Better

    int BETmissingNumber(int arr[],int size,int n){
        int Hash[n+1]={0};

        for(int i=0; i<size; i++){
            Hash[arr[i]]++;
        }
        for(int j=1; j<n+1; j++){
            if(Hash[j]==0){
                return j;
            }
        }
        return -1;
    }

    // TC = O(N + N)
    // SC = O(N)

// Optimal

    int OPTmissingNumber(int arr[],int size,int n){
        int XOR=0;
        int XOR1=0;
        
        for(int j=0; j<size; j++){
            XOR^=arr[j];
            XOR1^=j+1;
        }
        XOR1^=n;
        return XOR^XOR1;
    }

    // TC = O(N)
    // SC = O(1)



int main (){

    int n;
    cin>>n;
    int size= n-1;
    int arr[size];
    for(int i=0; i<size; i++) cin>>arr[i];

    // cout<<"Missing Element: "<<BRmissingNumber(arr,size,n);

    // cout<<"Missing Element: "<<BETmissingNumber(arr,size,n);

    cout<<"Missing Element: "<<OPTmissingNumber(arr,size,n);

    return 0;
}