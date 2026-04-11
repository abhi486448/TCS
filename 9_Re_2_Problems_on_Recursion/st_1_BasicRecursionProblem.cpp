#include<bits/stdc++.h>
using namespace std;

void PrintName5Time(int n){
    if(n==0) return;
    cout<<"Abhishek"<<endl;
    n--;
    PrintName5Time(n);
}

void Printlinear1ToN(int nu, int n){
    cout<<nu<<endl;
    if(n == nu) return;
    nu++;
    Printlinear1ToN(nu, n);
}

void PrintFromNTo1(int n){
    if(n==0) return;
    cout<<n<<endl;
    n--;
    PrintFromNTo1(n);
}

void Printlinear1ToNWithBackTrack(int i,int n){
    if(i<1) return ;
    Printlinear1ToNWithBackTrack(i-1,n);
    cout<<i<<endl;
}

void PrintlinearNTo1WithBackTrack(int i,int n){
    if(i>n) return ;
    PrintlinearNTo1WithBackTrack(i+1,n);
    cout<<i<<endl;
}

int main (){
    int n;
    cin>>n;
    // PrintName5Time(n);
    // Printlinear1ToN(1,n);
    // PrintFromNTo1(n);
    // Printlinear1ToNWithBackTrack(n,n);
    PrintlinearNTo1WithBackTrack(1,n);
    return 0;
}