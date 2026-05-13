#include<bits/stdc++.h>
using namespace std;

int maxConsecutiveOnce(int arr[],int n){
    
    int TT=0;
    int cnt=0;

    for(int i=0; i<n; i++){
        if(arr[i]==1){
            cnt++;
            if(cnt>TT){
                TT=cnt;
            }
            
        } else {
            cnt = 0;
        }
    }
    return TT;
}

int main (){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++) cin>>arr[i];

    cout<<"Max Consecutive Once: "<<maxConsecutiveOnce(arr, n);
    return 0;
}