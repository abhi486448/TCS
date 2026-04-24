#include <bits/stdc++.h>
using namespace std;

void Sort(int arr[], int n)
{
    for (int i = n-1; i >= 0; i--)
    {
        int DidSwap = 0;
        for (int j = 0; j <= i-1; j++)
        {
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                DidSwap = 1;
            }
            
        }
        if(DidSwap==0){
            cout<<"no swap"<<endl;
            break;
        }
    }
}

// Time Complexcity
    // for (int i = n-1; i >= 0; i--) -> this run n-1 times
    // {
    //     for (int j = 0; j <= i-1; j++) -> this run sum of (1 to n-2)
    //     {
    //         
    //     }
    // }

    // TC = (n * (n+1))/2 = n^2/2 + n/2 = O(n^2) (ans)
    // best case O(n)

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Bubble Sort
    Sort(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}