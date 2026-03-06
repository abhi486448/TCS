// Print sum of all element in an array

#include<iostream>
using namespace std;

int sum(int arr[], int n){
    int Sum=0;
    for(int i=0; i<n; i++){
        Sum+=arr[i];
    }
    return Sum;
}

int main (){
    int n;
    cout<<"Enter size: ";
    cin>>n;

    int arr[100];
    cout<<"Enter elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Sum is :"<<sum(arr,n);
    return 0;
}