#include<bits/stdc++.h>
using namespace std;

// Brout
    set<int> unianOfArrays(int arr[],int arr2[],int n,int n2){
        set<int> st;
        for(int i=0; i<n; i++){
            st.insert(arr[i]);
        }
        for(int i=0; i<n2; i++){
            st.insert(arr2[i]);
        }

        return st;
    }

    // TC = O(n1 log n) + O(n2 log n) + O(n1 + n2)
    // SC = O(n1 + n2) + O(n1 + n2)

// Better
    // No

// Optimal
    vector<int> OPunianOfArrays(int arr[],int arr2[],int n,int n2){
        int i=0;
        int j=0;

        vector <int> u;

        while(i<n && j<n2){
            if(arr[i] <= arr2[j]){
                if(u.empty() || arr[i] != u.back()){
                    u.push_back(arr[i]);
                }
                i++;
            } else if(arr2[j] < arr[i]){
                if(u.empty() || arr2[j] != u.back()){
                    u.push_back(arr2[j]);
                }
                j++;
            }
        }

        while(i<n){
            if(u.empty() || arr[i] != u.back()){
                u.push_back(arr[i]);
            }
            i++;
        }

        while(j<n2){
            if(u.empty() || arr2[j] != u.back()){
                u.push_back(arr2[j]);
            }
            j++;
        }
        return u;
    }

    // TC = O(n + n2)
    // SC = O(n + n2)


int main (){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    int n2;
    cin>>n2;

    int arr2[n2];
    for(int i=0; i<n2; i++) cin>>arr2[i];

    //1
    // set<int> S = unianOfArrays(arr, arr2, n, n2);

    // for(auto st : S){
    //     cout<<st<<" ";
    // }

    //2
    vector<int> unian = OPunianOfArrays(arr, arr2, n, n2);

    for(auto U: unian){
        cout<<U<<" ";
    }
    return 0;
}