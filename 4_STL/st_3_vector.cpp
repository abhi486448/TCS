#include<bits/stdc++.h>
using namespace std;

void explainVector(){
    vector<int> v;
    v.push_back(5);
    v.emplace_back(10);

    cout<< v[0] << " " <<v[1] <<endl;

    vector<pair<int, int>> p ;

    p.push_back({2, 5});
    p.emplace_back(6 , 7);

    for(auto pv : p){
        cout<<pv.first<<" "<<pv.second<<endl;
    }
    

    vector<int> w(5, 100);
    for(auto c : w){
        cout<<c<<endl;
    }

    vector<int> v1(5);
    for(auto av1 : v1){
        cout<<av1<<endl;
    }

    vector<int> v2(5, 20);
    vector<int> v3(v2);
    for(auto av3 : v3){
        cout<<av3<<endl;
    }

    

    vector<int>::iterator it = v.begin();

    it++;
    cout<< *(it) << " "<<endl;;

    it = it + 2;
    cout << *(it) <<endl;

    //vector<int>::iterator it = v.end(); // it will indicate last + 1 location

    vector<int> vv(10, 10);
    vv.push_back(20);
    vector<int>::reverse_iterator the  = vv.rend(); // if we write vector in reverse order then it point to the 1 before the first element
    the--;
    cout<< *(the)<<endl;

    vector<int>::reverse_iterator thee =  vv.rbegin(); // if we write vector in reverse order then it point to the first element
    cout<< *(thee) <<endl;
    thee++;
    cout<< *(thee) <<endl;
}

void printVector(){
    vector<int> v = {1, 2, 3, 4, 5};

    // for(vector<int>::iterator it = v.begin(); it!=v.end(); it++){
    //     cout<<*it<<endl;
    // }

    //or

    // for(auto it = v.begin(); it!=v.end(); it++){
    //     cout<<*it<<endl;
    // }

    // or

    for(auto it : v){
        cout<<it<<endl;
    }

}

void deletionInVector(){
    vector<int> v = {10, 20, 30, 40, 50};

    for(auto B : v){
        cout<< B <<endl;
    }
    cout <<endl;

    //deleat any element
    //{10, 20, 30, 40, 50}
    v.erase(v.begin() +1); //v.begin() +1 means (first + 1) location element 20

    for(auto B : v){
        cout<< B <<endl;
    }
    cout <<endl;

    //deleate multiple elements
    v.erase(v.begin() + 2, v.end()); // it takes two argument first is element from where we want to rease and second is last + 1 location before which we want to erase  [start , end)

    for(auto B : v){
        cout<< B <<endl;
    }
    cout <<endl;
}

void insertinVector(){
    vector<int>v(2, 100); //1{00, 100}
    v.insert(v.begin(), 300); // {300, 100, 100}
    v.insert(v.begin() + 1, 2, 10);// {300, 10, 10, 100, 200}

    for(auto vv : v){
        cout<< vv <<endl;
    }
    cout <<endl;

    // insert vector in vector
    vector<int> copy(2, 50); //{50, 50}
    // v.insert(v.begin(), copy.begin(), copy.end()); // {50, 50, 300, 10, 10, 100, 200}
    v.insert(v.begin(), *copy.begin());// {50, 300, 10, 10, 100, 200}
    
    for(auto vv : v){
        cout<< vv <<endl;
    }
    cout <<endl;
}

void otherVectorMethord(){
    vector<int> v(2, 10); //{10, 10}

    // size of vector
    //cout<< v.size() <<endl; // 2 elements

    // pop element from last
    v.pop_back(); // only remain {10};

    vector<int> v1(2, 30);

    // swap vectors to vectors
    // v -> {10}
    // v1 -> {30, 30}
    // on swap
    // v -> {30, 30}
    // v1 -> {10}
    v.swap(v1);

    // for(auto vv:v){
    //     cout<<vv<<endl;
    // }
    // cout<< endl;

    // for(auto vv:v1){
    //     cout<<vv<<endl;
    // }
    // cout<< endl;

    //to empty vector
    v.clear(); // erase the entire vector

    // to check vector is empty or not
    cout<< v.empty()<<endl; // it will give true or false

}

int main (){
    // explainVector();
    // printVector();
    // deletionInVector();
    // insertinVector();
    otherVectorMethord();
    return 0;
}