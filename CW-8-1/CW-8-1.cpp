//
// Created by XamaX on 19.11.2021.
//
#include "iostream"
#include "string"
#include "vector"

using namespace std;

string translationOfRomanNumber() {
    string result = "";
    int number;
    cin >> number;

    const int arab[13] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
    const string rim[13] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};

    int i = 12;
    while (number != 0) {
        while (number >= arab[i]) {
            number -= arab[i];
            result += rim[i];
        }
        i--;
    }

    return result;
}

int translationOfArabicNumber() {
    string number;
    cin >> number;

    vector <int> stack;

    for (int i = 0; i < number.length(); i++) {
        switch (number[i]) {
            case 'I':
                stack.push_back(1);
                continue;
            case 'V':
                stack.push_back(5);
                continue;
            case 'X':
                stack.push_back(10);
                continue;
            case 'L':
                stack.push_back(50);
                continue;
            case 'C':
                stack.push_back(100);
                continue;
            case 'D':
                stack.push_back(500);
                continue;
            case 'M':
                stack.push_back(1000);
                continue;
        }
    }

    bool stat = true;
    int sum = 0;
    int result = 0;

    for (int i = 0; i < stack.size(); i++) {
        if (stack[i] >= stack[i + 1]) {
            if (!stat) {
                result += sum;
                sum = 0;
                stat = true;
                continue;
            }
            sum += stack[i];
        }
        else {
            if (stat) {
                result += sum;
                sum = stack[i];
                stat = false;
            }
            sum = stack[i + 1] - sum;
        }
    }

    result += sum;

    return result;
}


int main() {
    string number;
    cin >> number;

    if (number == "rim") {
        string translatedNumber = translationOfRomanNumber();
        cout << translatedNumber;
        return 0;
    } else if (number == "arab") {
        int translatedNumber = translationOfArabicNumber();
        cout << translatedNumber;
        return 0;
    }

    return 0;
}
