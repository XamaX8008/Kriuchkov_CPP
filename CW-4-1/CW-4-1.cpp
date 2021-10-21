//
// Created by XamaX on 16.10.2021.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector <string> palindromFilter(int min, vector <string> strings) {
    vector <string> result;

    for (int i = 0; i < strings.size(); i++) {
        bool flag = true;
        string string = strings[i];
        if (string.length() >= min) {
            for (int j = 0; j < string.length(); j++) {
                if (string[j] != string[string.length() - j - 1]) {
                    flag = false;
                }
            }
            if (flag) {
                result.push_back(string);
            }
        }
    }

    return result;
}

int main() {
    vector <string> words;
    words.push_back("abacaba");
    words.push_back("aba");
    words.push_back("code");
    vector <string> result = palindromFilter(4, words);

    for (int k = 0; k < result.size(); k++) {
        cout << result[k] << " ";
    }

    return 0;
}
