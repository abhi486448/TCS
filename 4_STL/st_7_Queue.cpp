#include<bits/stdc++.h>
using namespace std;

void explainQueue(){
    // FIFO - {First In First Out}
    queue<int> q;
    q.push(1); // {1}
    q.push(2); // {1, 2}
    q.emplace(3); // {1, 2, 3}

    q.back() += 5; // last element 3 + 5 = 8

    // Q is {1, 2, 8}
    cout<<q.front()<<endl; // 1
    cout<<q.back()<<endl; // 8

    q.pop(); // {2, 8}

    cout<<q.front()<<endl; // 2

    // size, swap and emoty same as stack


}

int main (){
    explainQueue();
    return 0;
}