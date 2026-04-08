#include<bits/stdc++.h>
using namespace std;

void explainDigitExtract(){
    int N;

    cin>>N;

    while(N>0){
        int lastdigit = N%10;
        cout<<lastdigit<<" ";
        N /= 10;
    }
    cout<<endl;
}

void NumberOfDigits(){
    // 1st way
    // int N,count = 0;

    // cin>>N;

    // while(N>0){
    //     count++;
    //     N /= 10;
    // }
    // cout<<count<<endl;

    // 2nd way
    int N;

    cin>>N;

    int count = (int)log10(N) + 1;
    cout<<count<<endl; 
}

void NumInReverse(){
    int N;
    int ans = 0;

    cin>>N;

    while(N>0){
        int rem = N%10;
        if(ans == 0 && rem == 0){
            ans = 0;
        } else{
            ans = ans*10 + rem;
        }
        N /= 10;
    }
    cout<<ans<<endl;
}

void checkPalindrom(){
    // Check whether a given number ’n’ is a palindrome number.

    int Num;
    cin>>Num;

    int N = Num;

    int ans = 0;

    while(N>0){
        int rem = N%10;
        ans = ans*10 + rem;
        N /= 10;
    }

    if(Num==ans) cout<<true<<endl;
    else cout<<false<<endl;
}

int Power(int N, int p){
    if(p==0) return 1;
    else return N*Power(N, p-1);
}

void checkArmstrongN(){
    int Num;
    cin>>Num;

    int copy = Num;
    int sum = 0;

    int noDigit = (int)log10(Num) + 1;

    while(Num>0){
        int rem = Num%10;
        sum = sum + Power(rem, noDigit);
        Num /= 10;
    }

    if(copy == sum) cout<<"true";
    else cout<< "false";

}

void factersOfN(){
    int n;
    cin>>n;
    vector<int> ls;

    // time complexcity = O(sqrt(n))
    for(int i=1; i*i<=n; i++){
        if(n%i == 0){
            ls.push_back(i);
            if(n/i != i){
                ls.push_back(n/i);
            }
        }
    }

    // time complexcity = O(no. of facters * log(no. of facters of n))
    sort(ls.begin(), ls.end());

    // time complexcity = O(no. of facters)
    for(auto LI : ls){
        cout<<LI<<" ";
    }
    cout<<endl;

}

void checkNIsPrime(){
    int n;
    cin>>n;
    
    int count=0;

    // time complexcity = O(sqrt(n))
    for(int i=1; i*i<=n; i++){
        if(n%i == 0){
            count++;
            if(n/i != i){
                count++;
            }
        }
    }

    if(count<=2) cout<<"Prime Number";
    else cout<<"Not a Prime Number";

}

void GCDWithEquilateralAlgo(){
    int a,b;
    cin>>a>>b;

    while(a>0 && b>0){
        if(a>b) a = a % b;
        else b = b % a; 
    }

    if(a>b) cout<<a;
    else cout<<b;

    // Time complexcity
        //O(logϕ(min(a,b)))
}


int main (){
    // explainDigitExtract();
    // NumberOfDigits();
    // NumInReverse();
    // checkPalindrom();
    // checkArmstrongN();
    // factersOfN();
    // checkNIsPrime();
    GCDWithEquilateralAlgo();
    return 0;
}