#include<bits/stdc++.h>
using namespace std;

int hashingWithArr(char a, string s){
    int hasharr[26] = {0};

    for(int i=0; i<s.size(); i++){
        hasharr[s[i]-'a'] += 1;
    }

    return hasharr[a-'a'];
}

int main (){

    string s;
    cin>>s;

    int time;
    cin>>time;

    char a;

    while(time--){
        cin>>a;
        cout<<"Frequency of: "<<a<<" - "<<hashingWithArr(a, s)<<endl;
    }

    return 0;
}