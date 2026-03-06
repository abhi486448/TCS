#include<iostream>
using namespace std;

bool present(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}

int main (){
    int arr[10]={5,7,-2,10,22,-2,0,5,22,1};

    int key;
    cin>>key;
    // wether key is present in it or not ?

    bool found = present(arr, 10, key);

    if(found){
        cout<<key<<" is present"<<endl;
    } else {
        cout<<key<<" is apsent"<<endl;
    }
    return 0;
}