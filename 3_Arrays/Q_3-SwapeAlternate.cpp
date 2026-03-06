#include<iostream>
using namespace std;

// Swape alternate

void Swap_Alternate(int arr[], int n){
    int first=0, second=1;

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    while(first<=(n-2)){
        swap(arr[first],arr[second]);
        first+=2;
        second+=2;
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main (){
    int arr[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n=10;

    Swap_Alternate(arr, n);

    

    return 0;
}