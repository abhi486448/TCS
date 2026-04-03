#include<bits/stdc++.h>
using namespace std;

void explainMultiSet(){
    // Everything is same as Set
    // only stores duplicate elements also

    multiset<int> ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1, 1}
    ms.insert(1); // {1, 1, 1}

    //ms.erase(1); // all 1's erased

    int cnt = ms.count(1);
    cout<<cnt<<endl; // 0 // if ms.erase(1); runes

    ms.erase(ms.find(1), next(ms.find(1), 2));

    cnt = ms.count(1);
    cout<<cnt<<endl;

    // Rest all function same as Set

}

int main (){
    explainMultiSet();
    return 0;
}