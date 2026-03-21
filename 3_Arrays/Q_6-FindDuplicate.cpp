#include<iostream>
#include<vector>
using namespace std;

// Q_6 - Find Duplicate value present in the array
int findDuplicate(vector<int> &arr){
    int ans=0;
    for(int i=0; i<arr.size(); i++){
        ans^=arr[i];
    }

    for(int i=0; i<arr.size(); i++){
        ans^=i;
    }

    return ans;
}
int main(){
    vector<int> arr;
    cout<<"enter number of elements:"<<endl;
    int Size;
    cin>>Size;
    arr.resize(Size);
    int elm;
    for(int i=0; i<Size; i++){
        cin>>elm;
        arr[i] = elm;
    }  

    int ans = findDuplicate(arr);

    cout<<"Duplicate num: "<<ans;
    
    return 0;
}