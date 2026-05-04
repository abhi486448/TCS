#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string sentence = "The quick brown fox jumps over the lazy dog";
    stringstream ss(sentence);
    string word, longestWord;
    int maxLen = 0;

    while (ss >> word) {
        if (word.length() > maxLen) {
            maxLen = word.length();
            longestWord = word;
        }
    }

    cout << "Longest word : " << longestWord << endl;
    cout << "Length       : " << maxLen << endl;

    return 0;
}