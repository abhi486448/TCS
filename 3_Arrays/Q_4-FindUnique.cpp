#include<iostream>
using namespace std;

// find unique
int FindUnique(int arr[], int n){
    int ans = 0;
    for(int i=0; i<n; i++){
        ans^=arr[i];
    }
    return ans;
}

int main(){
    int arr[11]={1,2,5,6,8,8,6,7,1,2,5};
    int n=11;

    cout<<"Unique element is: "<<FindUnique(arr, n);
    return 0;
}