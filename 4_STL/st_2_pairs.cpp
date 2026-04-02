#include<bits/stdc++.h>
using namespace std;

void explainPair(){
    pair< int, int> p = {1, 3};

    cout<< p.first<< " "<< p.second<<endl;

    pair < int , pair<int, int>> q = {1 ,{ 3, 5}};

    cout<< q.first<< " "<< q.second.first<< " "<< q.second.second <<endl;

    pair <int , int> arr[] = {{1 , 2}, {3 , 4}, {5 , 6}};

    cout<<arr[0].first<< " "<<arr[0].second << " "<<arr[1].first<< " "<<arr[1].second<<" " <<arr[2].first<< " "<<arr[2].second <<endl;
}

int main (){

    explainPair();

    return 0;
}