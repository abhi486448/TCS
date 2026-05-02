#include<bits/stdc++.h>
using namespace std;

// Brout
    vector<int> intersectionArray(int arr1[],int n1,int arr2[],int n2){

        vector<int> visit(n2,0);
        vector<int> ans;
        for(int i=0; i<n1; i++){
            for(int j=0; j<n2; j++){
                if(arr1[i]==arr2[j] && visit[j]==0){
                    ans.push_back(arr1[i]);
                    visit[j]=1;
                    break;
                }
                if(arr2[j]>arr1[i]) break;
            }
        }
        return ans;
    }

    // TC = O(n1*n2)
    // SC = O(n2)

// Better
    // No
    
// Optimal
    vector<int> OPintersectionArray(int arr1[],int n1,int arr2[],int n2){
        int i=0;
        int j=0;

        vector<int> ans;
        while(i<n1 && j<n2){
            if(arr1[i]==arr2[j]){
                ans.push_back(arr1[i]);
                i++;
                j++;
            }
            if(arr1[i]<arr2[j]){
                i++;
            }
            if(arr2[j]<arr1[i]){
                j++;
            }
        }
        return ans;
    }

    // TC = O(n1 + n1)
    // SC = O(1)

int main (){

    int n1;
    cin>>n1;

    int arr1[n1];
    for(int i=0; i<n1; i++) cin>>arr1[i];

    int n2;
    cin>>n2;

    int arr2[n2];
    for(int i=0; i<n2; i++) cin>>arr2[i];

    // vector<int> In = intersectionArray(arr1, n1, arr2, n2);

    vector<int> In = OPintersectionArray(arr1, n1, arr2, n2);

    for(auto I : In){
        cout<<I<<" ";
    }
    return 0;
}