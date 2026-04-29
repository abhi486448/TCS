#include<bits/stdc++.h>
using namespace std;

int pF(vector <int> &arr,int low,int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]>pivot && j>=low+1){
            j--;
        }
        if(i<j){
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

void qS(vector <int> &arr,int low,int high){
    if(low<high){
        int pIndex = pF(arr, low, high);
        qS(arr, low, pIndex-1);
        qS(arr, pIndex+1, high);
    }
}

// Time Complexcity 
    // -> O(n log n)
// Space Complexcity
    // -> O(1)

int main (){
    vector <int> arr;
    int n; 
    cin >> n;
    for(int i=0; i<n; i++){
        int num;
        cin>>num;
        arr.push_back(num);
    }
    qS(arr, 0, arr.size()-1);

    for(auto v : arr){
        cout<<v<<" ";
    }
    return 0;
}