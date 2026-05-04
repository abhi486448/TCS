#include<iostream>
using namespace std;

int CelTOFah(int c){
    return ((9/5)*c)+32;
}

int main(){
    int TemperInCel = 25;

    cout<<"25C Temperature in Fahrenheit: "<<CelTOFah(TemperInCel);

    return 0;
}