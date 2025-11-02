#include<bits/stdc++.h>
using namespace std;

// " Pass by Value "
// void dosomething(int num) {
//     cout << num << endl;
//     num += 5;
//     cout << num <<endl;
//     num += 5;
//     cout << num <<endl;
// }

//or
// void dosomething(string s) {
//     s[0] = 't';
//     cout << s << endl;
// }

//" Pass by refrence "
void dosomething(string &s) {
    s[0] = 't';
    cout << s << endl;
}

int main() {
    // int num = 10;
    // dosomething(num); // " It is only getting the copy of num "
    // cout << num <<endl;

    //or

    string s = "raj";
    dosomething(s);
    cout << s << endl;
    return 0;
}