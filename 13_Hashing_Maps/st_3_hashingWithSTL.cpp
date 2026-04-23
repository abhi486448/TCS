#include<bits/stdc++.h>
using namespace std;

// Time Complexcity in Map
    // Store  |_  O(Log N) both
    // Fetch  |

// Time Complexcity in Unordered_Map
    // Store  |_  O(1) both , O(N) in rear case
    // Fetch  |

int hashingWithMap(int num, int arr[], int n){
    map<int, int> mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]] += 1;
    }

    return mpp[num];
}

int main (){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    int time;
    cin>>time;

    int num;

    while(time--){
        cin>>num;
        cout<<"Frequency of "<<num<<" - "<<hashingWithMap(num, arr, n)<<endl;
    }
}