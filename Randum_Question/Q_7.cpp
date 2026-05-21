#include<bits/stdc++.h>
using namespace std;

vector<int> firstNegativrOfSubArray(vector<int> &nums, int k){
//     7
// 1 -1 1 -2 -4 1 1 
// 3
// 1 -1 1 = -1
// -1 1 -2 = -1
// 1 -2 -4 = -2
// -2 -4 1 = -2
// -4 1 1 = -4
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

    vector<int> ans=firstNegativrOfSubArray(v,k);

    for(auto a:ans){
        cout<<a<<" ";
    }
    return 0;
}