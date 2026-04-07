#include<bits/stdc++.h>
using namespace std;

void explainBinarySearch(){

    // Q.1 check id x exists in the sorted array or not?

    int A[] = {1, 4, 5, 8, 9};

    bool res = binary_search(A, A+5, 3); // binary_search is a function that takes three arguments 1st starting location, 2nd last + 1 location , 3rd is what we want to search and it return true or false based on input

    cout<<res<<endl; //0 means 3 is not present on A[]

    bool res1 = binary_search(A, A+5, 4);

    cout<<res1<<endl;// 1 means 4 is present in A[]


}

void explainLowerBound(){

    // Lower Bound is that stl which returns the first occurence of the element if it occures and if it doesn't occures then it will returns the iterator pointing to the element which is the imideate greater of the given element

    int a[] = {1, 4, 5, 6, 9, 9};

    int ind = lower_bound(a, a+6, 4) - a; // lower_bound give iterator point to that value we want to search and is in the array

    cout<<ind<<endl;

    int ind1 = lower_bound(a, a+6, 7) - a;// as we know 7 is not present in array then it will point to the element next greater then 7 present in array

    cout<<ind1<<endl;

    int ind2 = lower_bound(a, a+6, 10) - a;// since 10 is not present and last element is smaller then 10 then it will point to the next location after the last element that is 6

    cout<<ind2<<endl;

    // for vector

    vector<int> v = {1, 2, 3, 4};

    int ind3 = lower_bound(v.begin(), v.end(), 3) - v.begin();

    cout<<ind3<<endl; // 2 means 3 is at 2 index
}

void explainUpperBound(){

    int a[] = {1, 4, 5, 6, 9, 9};

    int ind = upper_bound(a, a+6, 4) - a; // it will point to the next greater element to the 4

    cout<<ind<<endl; // 2 and 4 is at 1

    int ind1 = upper_bound(a, a+6, 7) - a; // since 7 is not present it will point next greater element that is 9

    cout<<ind1<<endl;// 4 where 9 is

    int ind2 = upper_bound(a, a+6, 10) - a;// 10 is also not present in array and last element is smaller then 10 then it will point to end means last + 1th location

    cout<<ind2<<endl;//6

    //in vector

    vector<int> v = {1, 4, 5, 6, 9, 9};

    int ind3 = upper_bound(v.begin(), v.end(), 4) - v.begin();

    cout<<ind3<<endl;// 2

    //complexcity
        //both lower_bound and upper_bound works in log n which is similar to binery search
}

void questions(){
    //Q. Find the first occurrence of a x in a sorted array. If it does not exits, print -1.

    // int A[] = {1, 4, 4, 4, 4, 9, 9, 10, 11};

    // int x;
    // cin>>x;

    // bool res = binary_search(A,A+9, x);

    // if(res){
    //     cout<<lower_bound(A,A+9, x) - A <<endl;
    // } else {
    //     cout<<-1<<endl;
    // }

    //Q. Find the last occurrence of a x in a sorted array. If it does not exits, print -1.

    // int a[] = {1, 4, 4, 4, 4, 9, 9, 10, 11};

    // int x;
    // cin>>x;

    // int ind = upper_bound(a, a+9, x) - a;
    // ind--;

    // if(ind>=0 && a[ind]==x) cout<<ind<<endl;
    // else cout<<-1<<endl;

    //Q. Find the largent number smaller then X in a sorted array. If no number exists print -1.

    // int a[] = {1, 4, 4, 4, 4, 9, 9, 10, 11};

    // int x;
    // cin>>x;

    // int LSN = lower_bound(a, a+9, x) - a;

    // LSN--;

    // if(LSN>=0) cout<<a[LSN]<<endl;
    // else cout<<-1<<endl;

    //Q. Find the smallest number greater then X in a sorted array. If no number exist print -1.

    int a[] = {1, 4, 4, 4, 4, 9, 9, 10, 11};

    int x;
    cin>>x;

    int SGX = upper_bound(a, a+9, x) - a;

    if(SGX<9) cout<<a[SGX]<<endl;
    else cout<<-1<<endl;
}

int main (){
    // explainBinarySearch();
    // explainLowerBound();
    // explainUpperBound();
    questions();
    return 0;
}