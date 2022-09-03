//
// Created by XamaX on 29.10.2021.
//
#include <iostream>
#include <string>

using namespace std;

string reverseWords(string stringIn) {
    int length = 0;
    int hold;
    for (int i = 0; i < stringIn.length(); i++) {
        if (stringIn[i] != ' ') {
            length++;
        }
        else {
            for (int j = i - length; j < i; j++) {
                if (length > 1) {
                    hold = stringIn[j];
                    stringIn[j] = stringIn[j + length - 1];
                    stringIn[j + length - 1] = hold;
                    length -= 2;
                }
            }
            length = 0;
        }
    }
    for (int j = stringIn.length() - length; j < stringIn.length(); j++) {
        if (length > 1) {
            hold = stringIn[j];
            stringIn[j] = stringIn[j + length - 1];
            stringIn[j + length - 1] = hold;
            length -= 2;
        }
    }

    return stringIn;
}

int main() {
    string string;
    getline(cin, string);
    cout << reverseWords(string);

    return 0;
}
