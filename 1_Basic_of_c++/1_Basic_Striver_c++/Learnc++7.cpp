#include<bits/stdc++.h>
using namespace std;

int main (){
    int arr[5];  // " Array can by stored in anywhere in memory but every elements of array stored in consecutive memory location "
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

    arr[3] = 16; 
    cout << arr[3];
    return 0;
}