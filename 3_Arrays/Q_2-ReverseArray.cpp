#include<iostream>
using namespace std;

// reverse the array
void Reverse(int arr[], int n){
    int start=0,end=n-1,temp;
    while(start<=end){
        // temp = arr[end];
        // arr[end] = arr[start];
        // arr[start] = temp;
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[10]={2,3,5,6,9,0};
    int n=6;

    Reverse(arr, n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}