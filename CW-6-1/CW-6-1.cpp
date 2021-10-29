//
// Created by XamaX on 29.10.2021.
//
#include <iostream>
#include <string>

using namespace std;

string deleteSpaces(string stringIn) {
    int count = 0;
    for (int i = 0; i < stringIn.length(); i++) {
        if (stringIn[i] == ' ') {
            count++;
        }
        else if (count == 1) {
            count = 0;
        }
        else if (count != 0) {
            stringIn.erase(i - count + 1, count);
            i -= count;
            count = 0;
        }
    }
    if (stringIn[0] == ' ') {
        stringIn.erase(0, 1);
    }
    while (stringIn[stringIn.length() - 1] == ' ') {
        stringIn.erase(stringIn.length() - 1, 1);
    }

    return stringIn;
}

int main() {
    string string;
    getline(cin, string);
    cout << deleteSpaces(string) << "&";

    return 0;
}

