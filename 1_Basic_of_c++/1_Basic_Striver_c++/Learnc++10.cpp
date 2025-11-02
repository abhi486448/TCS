#include <bits/stdc++.h>
using namespace std;

int main() {

    // for (int i=0; i<10; i++){ // " i will insilize only in first itration after that it will only increment"
    //     cout << "Striver" << endl;
    // }

    // or also

        // for (int i=10; i>0; i--){
        //     cout << "Striver " << i << endl;
        // }

    // cout << i; // " This will throw error because scope of i is only  inside the loop only"

    int i=2;
    // while(i<=1) {
    //     cout << "Striver " << i << endl;
    //     i++;
    // } // " This will not run"

    // " but in do..while"

    do {
        cout << "Striver " << i << endl;
        i++;
    } while(i<=1); // " This will run atlease one time  "
    
    return 0;
}