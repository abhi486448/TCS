#include<bits/stdc++.h>
using namespace std;

void explainDeque(){
    deque<int> dq;
    dq.push_back(9);
    dq.emplace_back(4);
    dq.push_front(2);
    dq.emplace_front(3);

    for(auto Q:dq){
        cout<<Q<<endl;
    }
    cout<< endl;

    dq.pop_back();
    dq.pop_front();

    for(auto Q:dq){
        cout<<Q<<endl;
    }
    cout<< endl;

    // rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap

}

int main (){
    explainDeque();
    return 0;
}