#include<bits/stdc++.h>
using namespace std;

void merge(vector <int> &arr,int low,int mid,int high){
    int left = low;
    int right = mid+1;
    vector <int> tem;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            tem.push_back(arr[left]);
            left++;
        } else {
            tem.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        tem.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        tem.push_back(arr[right]);
        right++;
    }

    // push temp to arr
    for(int i=low; i<=high; i++){
        arr[i] = tem[i-low];
    }
}

void mergeSort(vector <int> &arr,int low,int high){
    if(low == high) return ;
    int mid = (low + high)/2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    merge(arr, low, mid, high);

}

// Complexcity
    // Time Complexcity
        // total = C_of_mergrSorte * C_of_merge
        // total = O(log base 2(n)) * O(n);
        // total = O(n log base 2 (n));

    // Space Complexcity
        // space talen by Tem;
        // SC = O(n);
        
int main (){
    int n;
    cin>>n;

    vector <int> arr;
    for(int i=0; i<n; i++){
        int num;
        cin>>num;
        arr.push_back(num);
    }

    mergeSort(arr, 0, n-1);

    for(int i=0; i<n; i++){
        cout<<arr[i]<< " ";
    }

    return 0;
}
