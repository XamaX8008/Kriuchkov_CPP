//
// Created by XamaX on 22.10.2021.
//
#include <iostream>
#include <string>

using namespace std;

string clearString(string backspaceString) {
    for (int i = 0; i < backspaceString.length(); i++) {
        if (backspaceString[i] == '@') {
            backspaceString.erase(i, 1);
            backspaceString.erase(i - 1, 1);
            i -= 2;
        }
    }

    return backspaceString;
}

int main() {
    string string;
    cin >> string;

    cout << clearString(string);

    return 0;
}

