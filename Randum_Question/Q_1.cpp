// Check the given number is in power of 2

#include<iostream>
using namespace std;

// logic 1:-
void check_num(int num, int mult=1){
    if(mult<num){
        mult*=2;
        check_num( num, mult);
    } else if( mult == num ){
        cout<<"Yes "<<num<<" is in power of 2";
    } else {
        cout<<"No "<<num<<" is not in power of 2";
    }
}

// Logic 2:-
bool check_bin_num(int num){
    int rem = 0, ans = 0,mult = 1,arr[100], n=0;
    while(num>0){
        rem = num%2;
        num/=2;
        arr[n]=rem;
        n++; 
        ans = rem*mult + ans;
        mult*=10;
    }
    bool flag=false;
    // cout<<"ans: "<<ans<<endl;
    if(arr[n-1]==1){
        flag=true;
        for(int i=n-2; i>=0; i--){
            if(arr[i]==0){
                flag=true;
            } else {
                flag=false;
                return flag;
            }
        }
    } else {
        flag=false;
        return flag;
    }

    return flag;
    
}

int main(){
    int num;

    cout<<"enter num: ";
    cin>>num;
    
    // check_num(num);
    bool flag = check_bin_num(num);

    if(flag){
        cout<<num<<" is in power of 2";
    } else {
        cout<<num<<" is not in power of 2";
    }
    return 0;
}