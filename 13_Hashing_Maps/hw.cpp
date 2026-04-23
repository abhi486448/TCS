#include<bits/stdc++.h>
using namespace std;


int main (){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];


    map<int, int> mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]] += 1;
    }

    int check=INT_MIN;
    int check2 = INT_MAX;

    pair<int, int> p = {0,0};
    pair<int, int> q = {INT_MAX,INT_MAX};

    for(auto M : mpp){
        if(M.second>p.second){
            p.first = M.first;
            p.second = M.second;
        } 
        if(M.second<q.second){
            q.first = M.first;
            q.second = M.second;
        } 
    }

    cout<<"Max-> "<<p.first<<" - "<<p.second<<endl;
    cout<<"Min-> "<<q.first<<" - "<<q.second<<endl;
}