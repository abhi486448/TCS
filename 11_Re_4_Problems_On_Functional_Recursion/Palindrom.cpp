#include<bits/stdc++.h>
using namespace std;

bool palindrom(int i,string &s){
    if(i>s.size()) return true;

    if(s[i] == s[s.size()-i-1]) {
        palindrom(i+1, s);
    } else return false;
}

int main (){
    string s = "MADAM";

    if(palindrom(0, s)) {
        cout<<"Is Palindrom: True";
    } else cout<<"Is Palindrom: False";
        

    return 0;
}