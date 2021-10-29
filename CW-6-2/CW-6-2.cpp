//
// Created by XamaX on 29.10.2021.
//
#include <iostream>
#include <string>

using namespace std;

string deleteWords(int limit, string stringIn) {
    int length = 0;
    for (int i = 0; i < stringIn.length(); i++) {
        if (stringIn[i] != ' ') {
            length++;
        }
        else if (length < limit) {
            stringIn.erase(i - length, length + 1);
            i -= length + 1;
            length = 0;
        }
        else {
            length = 0;
        }
    }
    if (length < limit) {
        stringIn.erase(stringIn.length() - length - 1, length + 1);
    }

    return stringIn;
}

int main() {
    string string;
    int limit;
    getline(cin, string);
    cin >> limit;
    cout << deleteWords(limit, string);

    return 0;
}
