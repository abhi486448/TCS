#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> p1, pair<int,int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    // they are same

    if(p1.first > p2.first) return true;
    return false;
}

void explainExtra(){
    // sort() - { use to sort all type of data structer rest then map}

    //in array
    int a[] = {5, 1, 4, 2, 3};
    
    sort(a, a + 5); // it takes two argument first array , second location of last element + 1;

    for(int i=0; i<5; i++){
        cout<<a[i]<<" ";
    } // and this will show that ouw array is sorted
    cout<<endl;

    //in vector

    vector<int> v={5, 1, 4, 2, 3};

    sort(v.begin(), v.end());

    for(auto V : v){
        cout<<V<<" ";
    }
    cout<<endl;

    // to sort in decreasing order
    sort(a, a+5, greater<int>()); // this takes three argument first 2 same as before and in last greater<int>()

    for(int i=0; i<5; i++){
        cout<<a[i]<<" ";
    } // and this will show that ouw array is sorted
    cout<<endl;

    // in pair

    pair<int,int> p[] = {{1,2},{2,1},{4,1}};
    // sort it according to second element
    // if second element is same , then sort
    // it according to first element but in descending order

    sort(p, p+3, comp);
    // [{4 ,1},{2 ,1},{1 ,2}]

    cout<<"[";
    for(auto P : p){
        cout<<"{"<<P.first<<" ,"<<P.second<<"},";
    }
    cout<<"]";
    cout<<endl;

    // builtin function to count no. of 1 in bineary of any no.

    int num = 7;
    int cnt = __builtin_popcount(num);
    cout<<cnt<<endl;

    long long num1 = 165786578687;
    int cnt1 = __builtin_popcountll(num1);
    cout<<cnt1<<endl;

    // parmutation maximum posible combination

    string s = "123";
    sort(s.begin(), s.end());

    do{
        cout<< s <<endl;
    } while(next_permutation(s.begin(), s.end()));

    // to find max element
    
    int arr[] = {2, 8, 3, 10, 6};

    int maxi = *max_element(arr, arr+5);

    cout<<maxi<<endl; //10
}

int main (){
    explainExtra();
    return 0;
}