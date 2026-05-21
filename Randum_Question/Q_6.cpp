#include<bits/stdc++.h>
using namespace std;

vector<int> firstNectiveOfSubArray(vector<int> v,int k){
    vector<int> ans;

    for(int i=0; i<=v.size()-k; i++){
        for(int j=i; j<i+k; j++){
            if(v[j]<0){
                ans.push_back(v[j]);
                break;
            }
        }
    }

    return ans;
}

int main(){
    vector<int> v;

    int n;
    cin>>n;



    for(int i=0;i<n; i++){
        int input ;
        cin>>input;
        v.push_back(input);
    }

    int k;
    cin>>k;

    vector<int> ans=firstNectiveOfSubArray(v,k);

    for(auto a:ans){
        cout<<a<<" ";
    }
    return 0;
}