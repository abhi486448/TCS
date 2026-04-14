#include<bits/stdc++.h>
using namespace std;

void ParameterisedWay(int N, int mult = 1){
    if(N==1){
        cout<<mult<<endl;
        return;
    }
    ParameterisedWay(N-1, mult*N);

}

int FunctionalWay(int N){
    if(N==1) return 1;
    return (N * FunctionalWay(N-1));
}



int main (){
    int N;
    cin>>N;
    // ParameterisedWay(N);
    cout<<FunctionalWay(N)<<endl;
    return 0;
}