#include<bits/stdc++.h>
using namespace std;

void dosomething(int arr[], int n) { // " array always passes as refrance but in vector , map ,lis we have to include '&' "
    arr[0] += 100;
    cout << "Value inside function: " << arr[0] << endl; 
}

int main() {
    int n = 5;
    int arr[n];
    for(int i=0; i<n; i++){
        cout << i << endl;
        cin >> arr[i];
    }

    dosomething(arr, n);

    cout << "Value inside int main: " << arr[0] << endl; 

    return 0;
}