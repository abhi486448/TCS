#include<bits/stdc++.h>
using namespace std;

void explainSet(){
    set<int> st; // uniqe and sorted
    st.insert(1); // {1}
    st.insert(2); // {1, 2}
    st.insert(2); // {1, 2}
    st.emplace(4); // {1, 2, 4}
    st.insert(3); // {1, 2, 3, 4}

    // Functionality of insert in vector
    // can be used also, that only increaese
    // efficiency

    // begin(), end(), rbegin(), rend(), size(),
    // empty() and swap() are same as those of above

    // {1, 2, 3, 4, 5}
    auto it = st.find(3); // it is a iterator
    cout<<*it<<endl; // it is the location where 3 is

    // {1, 2, 3, 4, 5}
    auto its = st.find(6); // since 6 is not present in set it will give location of last element + 1 location

    // {1, 2, 3, 4, 5}
    st.erase(5); // reases 5 // takes logarithmic time

    int cnt =  st.count(1); // if present 1 else 0

    cout<<cnt<<endl;

    cnt =  st.count(7); // if present 1 else 0

    cout<<cnt<<endl;

    auto it  =  st.find(3);
    st.erase(it); // it takes constant time

    // {1, 2, 4, 5}
    auto it1 = st.find(2);
    auto it2 = st.find(5);
    st.erase(it1, it2); // after erase{1, 5} [first, last)

    // lower_bound() and upper_bound() function works in the same way
    // as in vector ot does.

    // This is the syntax
    auto it  = st.lower_bound(1);

    auto it = st.upper_bound(5);

    // Time Complexcity
        // Everything done in O(log n);
}
int main (){
    explainSet();
    return 0;
}