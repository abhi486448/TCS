#include<iostream>
#include<vector>
using namespace std;

int main (){
    // 3 ways to inislize vector

    //1
    // vector<int> vec; // 0 size 
    // cout<<vec[0]<<endl; // there is nothing

    //2
    // vector <int> vec = {1,2,3}; // it contain 3 values(1, 2, 3), size = 3;
    // cout<<vec[0]<<endl; // it show first element

    //3
    //vector <int> vec(3,0); // first argument takes size of vector and the second argument is put in those index; meanse all 3 index contain 0
    //cout<<vec[0]<<endl; // it show first element

    // loop in vector
    // for(int i : vec){ //for each loop
    //     // here i is not index it is value at that index itself and its type must be similer to the type of vector
    //     cout<<i<<endl;
    // }

    // vector functions

    //1 size() - this function help to find size of the vector
    vector<int> vec(1,0);
    cout<<"size: "<<vec.size()<<endl;

    //2 push_back() - help to push element at last
    vec.push_back(10);
    vec.push_back(20);
    cout<<"size: "<<vec.size()<<endl;

    //3 pop_back() - remove last element
    vec.pop_back();
    for(int i : vec){
        cout<<i<<endl;
    }

    //4 front() - give first element
    cout<<vec.front()<<endl;

    //5 back() - give last element
    cout<<vec.back()<<endl;

    //6 at() - to access value at any index
    cout<<vec.at(1)<<endl;
    return 0;
}