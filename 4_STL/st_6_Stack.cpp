#include<bits/stdc++.h>
using namespace std;

void explainStack(){
    //LIFO - {Last In First Out}

    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {2, 1}
    st.push(3); // {3, 2, 1}
    st.push(4); // {4, 3, 2, 1}
    st.emplace(5); // {5, 4, 3, 2, 1}

    cout<<st.top()<<endl; // print 5

    // cout<<st[2]<<endl; // this will throw error "** st[2] is invalid **"

    st.pop(); // remain {4, 3, 2, 1}

    cout<<st.top()<<endl; // 4

    cout<<st.size()<<endl; // {4, 3, 2, 1} total 4
    
    cout<<st.empty()<<endl; // it will give true or false based on st that is false because it is not empty

    stack<int> st1, st2;

    st1.push(1); // {1}
    st1.push(2); // {2, 1}
    st1.push(3); // {3, 2, 1}
    st1.push(4); // {4, 3, 2, 1}

    st2.push(10); // {10}
    st2.push(20); // {20, 10}
    st2.push(30); // {30, 20, 10}
    st2.push(40); // {40, 30, 20, 10}

    st1.swap(st2);

    cout<<st1.top()<<endl;
    cout<<st2.top()<<endl;

    // {push, pop, top} = "these mathords takes O(1) of time complexcity"


}

int main (){
    explainStack();
    return 0;
}