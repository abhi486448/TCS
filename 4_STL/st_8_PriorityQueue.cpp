#include<bits/stdc++.h>
using namespace std;

void explainPQ(){
    // max heap (arrange everythig from max to min)
    priority_queue<int> pq; 

    pq.push(5); // {5}
    pq.push(2); // {5, 2}
    pq.push(8); // {8, 5, 2}
    pq.emplace(10); // {10, 8, 5, 2}

    cout<<pq.top()<<endl; // 10

    pq.pop();// {8, 5, 2} remain

    cout<<pq.top()<<endl; // 8

    // size, swap, empty function same as others

    // Minimum Heap (arranged in min to max order)
    priority_queue<int, vector<int>, greater<int>> mpq;
    mpq.push(5); // {5}
    mpq.push(2); // {2, 5}
    mpq.push(8); // {2, 5, 8}
    mpq.emplace(10); // {2, 5, 8, 10}

    cout<<mpq.top()<<endl;

    // Time Complexcity
        // push -> log n
        // pop  -> log n
        // top  -> O(1)
}

int main (){
    explainPQ();
    return 0;
}