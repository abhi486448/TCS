#include<bits/stdc++.h>
using namespace std;

int hashingWithArr(int num, int arr[], int size){
    int hasharr[size+1] = {0};

    for(int i=0; i<size; i++){
        hasharr[arr[i]] += 1;
    }

    return hasharr[num];
}

int main (){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    int time;
    cin>>time;

    int num;

    for(int j=0; j<time; j++){
        cin>>num;
        cout<<"Frequency of: "<<num<<" - "<<hashingWithArr(num, arr, n)<<endl;
    }

    return 0;
}