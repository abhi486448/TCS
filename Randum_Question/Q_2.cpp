// String to number

#include<iostream>

using namespace std;

int main(){
    char st[] = {"123456"};
    int ans=0;
    int temp=0;


    int Size = sizeof(st)/sizeof(st[0])-1;
    cout<<Size<<endl;
    for(int i=0; i<Size; i++){
        temp = st[i] - '0';
        ans = ans*10 +temp;
    }
    cout<<ans<<endl;
    return 0;
}