#include <bits/stdc++.h>
using namespace std;

void Sort(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int min = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        swap(arr[min], arr[i]);
    }
}

// Time Complexcity
    // for (int i = 0; i <= n - 2; i++) -> this run n-1 times equal to n
    // {
    // 
    //     for (int j = i; j <= n - 1; j++) -> this run sum of natural no. from 1 to n-1 or n
    //     {
    //         
    //     }
    //   
    // }

    // TC = (n * (n+1))/2 = n^2/2 + n/2 = O(n^2) (ans)

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Selection Sort
    Sort(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}