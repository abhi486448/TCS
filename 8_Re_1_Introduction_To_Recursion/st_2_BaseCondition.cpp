#include<bits/stdc++.h>
using namespace std;
int GlovVar = 0;

void f(){
    if(GlovVar == 3) return;
    cout<<GlovVar<<endl;

    GlovVar++;
    
    f();

}

int main (){

    f();

    return 0;
}