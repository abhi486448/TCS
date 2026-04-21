#include<bits/stdc++.h>
using namespace std;

bool IsPallindrom(int i, string s){
    if(i>=s.size()-1-i) return true;
    if(s[i] == s[s.size()-i-1]){
        return IsPallindrom(i+1, s);
    } else return false;
}

int main (){
    string s = "enO yrery One:";

    s.erase(remove_if(s.begin(), s.end(), [](char c) {
        return !isalpha(c);   // remove if NOT alphabet
    }), s.end());
    cout<<IsPallindrom(0,s)<<endl;

    return 0;
}