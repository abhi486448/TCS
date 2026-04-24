#include <bits/stdc++.h>
using namespace std;

void Sort(int arr[], int n)
{
    int j;
    for (int i = 0; i <= n-1; i++)
    {
        j=i;
        while(j>0 && arr[j-1]>arr[j])
        {
            swap(arr[j-1], arr[j]);
            j--;
        }
    }
}

// Time Complexcity
    // for (int i = 0; i <= n-1; i++) -> this run n-1 time or n
    // {
    //     j=i;
    //     while(j>0 && arr[j-1]>arr[j]) -> this run in sum from (1 to n-1)
    //     {
    //         swap(arr[j-1], arr[j]);
    //         j--;
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

    // Insertion Sort
    Sort(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}