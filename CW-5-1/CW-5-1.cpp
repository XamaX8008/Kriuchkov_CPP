//
// Created by XamaX on 22.10.2021.
//
#include <iostream>
#include <string>

using namespace std;

int main() {
    string string, newString = "";
    cin >> string;

    int count = 0;
    for (int i = 0; i < string.length(); i++) {
        if (string[i] == '(') {
            int j = 0;
            while (string[i + j] != ')') {
                count++;
                j++;
            }
            i += count;
        }
        else {
            newString += string[i];
        }
    }

    cout << newString;

    return 0;
}
