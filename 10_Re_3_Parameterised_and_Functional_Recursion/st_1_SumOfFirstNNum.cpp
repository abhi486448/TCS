#include<bits/stdc++.h>
using namespace std;

void ParameterisedWay(int N, int sum = 0){
    if(N<1){
        cout<<sum<<endl;
        return;
    }
    ParameterisedWay(N-1, sum+N);

}

int FunctionalWay(int N){
    if(N==0) return 0;
    return (N + FunctionalWay(N-1));
}

int main (){
    int N;
    cin>>N;
    // ParameterisedWay(N, 0);
    cout<<FunctionalWay(N)<<endl;
    return 0;
}