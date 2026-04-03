#include<bits/stdc++.h>
using namespace std;

void explainMap(){
    // Map store unique keys in sorted order
    map<int, int> mpp;

    map<int, pair<int, int>> mpp1;

    map<pair<int, int>, int> mpp2;

    mpp[1] = 2;
    mpp.emplace(3, 1);
    mpp.insert({2,4});

    mpp2[{2,3}] = 10;

    for(auto it : mpp){
        cout<< it.first << " " << it.second <<endl;
    }
    cout<< endl;

    cout<< mpp[1]<<endl;
    cout<< mpp[5]<<endl;

    auto it1 = mpp.find(3);
    cout<< it1->second <<endl;

    auto it2 = mpp.find(5); // point after the map
    cout<< it2->second <<endl;

    // This is syntex
    auto it3 = mpp.lower_bound(2);

    auto it4 = mpp.upper_bound(3);

    // erase, swap, size and empty are same as above

    // Time Complexity
        // log n
}

void explainMultiMap(){
    // everything same as map, only it can store multiple keys
    // only mpp[key] cannot be used here
    // duplicate keys in sorted order
}

void explainUnorderedMap(){
    // same as set and unordered_set diffrence
    // unique keys but in unordered

    // Time Complaxity
        // O(1)
        // rearest of rearest time O(N)
}

int main (){
    // explainMap();
    // explainMultiMap();
    explainUnorderedMap();
    return 0;
}