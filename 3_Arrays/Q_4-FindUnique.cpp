#include<iostream>
using namespace std;

// find unique
int FindUnique(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]!=arr[j]) {}
        }
    }
}

int main(){
    int arr[11]={1,2,5,6,8,8,6,0,1,2,5};
    int n=11;

    int unique;
    unique=FindUnique(arr, n);

    cout<<"Unique element is: "<<unique;
    return 0;
}