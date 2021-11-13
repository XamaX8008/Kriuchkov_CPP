//
// Created by XamaX on 13.11.2021.
//
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

vector <string> readVector() {
    vector <string> result;
    string stringIn;
    string element = "";
    getline(cin, stringIn);

    for (int i = 0; i < stringIn.size(); i++) {
        if (stringIn[i] != ' ') {
            element += stringIn[i];
        }
        else {
            result.push_back(element);
            element = "";
        }
    }
    result.push_back(element);

    return result;
}

vector <int> vectorTranslation(vector <string>& vectorIn) {
    vector <int> result;
    for (int i = 0; i < vectorIn.size(); i++) {
        result[i] = stoi(vectorIn[i]);
    }

    return result;
}

string join(vector <string>& vectorIn, string delimiter) {
    string result = "";
    for (int i = 0; i < vectorIn.size() - 1; i++) {
        result += vectorIn[i] + delimiter;
    }
    result += vectorIn[vectorIn.size() - 1];
    return result;
}

void printVector(vector <string>& vectorIn) {
    for (int i = 0; i < vectorIn.size(); i++) {
        cout << vectorIn[i] << " ";
    }
}

int main() {
    return 0;
}
