#include<bits/stdc++.h>
using namespace std;

// Brute
    int SubarraySumEqualsK(int arr[],int n,int k){
        int length=0;
        
        for(int i=0; i<n; i++){
            int sum=0;
            for(int j=i; j<n; j++){
                sum+=arr[j];
                if(sum==k){
                    length = max(length, j-i+1);
                }
            }
        }
        return length;
    }

    // TC = O(n^2)
    // SC = O(1)

// Better
    int BETlongestSubarray(int arr[],int n,int k){
        map<int , int> preSumMap;
        int sum=0;
        int maxLen=0;

        for(int i=0; i<n; i++){
            sum+=arr[i];

            if(sum==k){
                maxLen = max(maxLen, i+1);
            }

            int rem = sum - k;
            if(preSumMap.find(rem) != preSumMap.end()){
                int len = i - preSumMap[rem];
                maxLen = max(maxLen, len);
            }
            
            if(preSumMap.find(sum) == preSumMap.end()){
                preSumMap[sum]=i;
            }
        }
        return maxLen;
    }
    // TC
        // in ordered_map = O(N log N)
        // in unordered_map {
                // in best case = O(n*1)
                // in worse case = O(n^2)
        //  }
        
    // SC = O(N)
// Optimal
    int OPlongestSubarray(int arr[],int n,int k){
        int left=0, right=0;
        int sum = arr[0];
        int maxLen = 0;

        while(right<n){
            while(left<=right && sum > k){
                sum -= arr[left];
                left++;
            }
            if(sum == k){
                maxLen = max(maxLen, right-left+1);
            }
            right++;
            if(right < n) sum += arr[right];
        }
        return maxLen;
    }

    // TC = O(2N)
    // SC = O(1)

int main (){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    int k;
    cin>>k;

    // int ans= SubarraySumEqualsK(arr, n, k);

    // int ans= BETlongestSubarray(arr,n,k);

    int ans= OPlongestSubarray(arr,n,k);

    cout<<"Length: "<<ans;
    return 0;
}