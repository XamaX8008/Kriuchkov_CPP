//
// Created by XamaX on 22.10.2021.
//
#include <iostream>

using namespace std;

void sortByInserts(int *array) {
    int hold, holdIndex;

    for (int i = 0; i < 9; i++) {
        holdIndex = i + 1;
        hold = array[holdIndex];
        for (int j = i + 1; j > 0; j--) {
            if (hold < array[j - 1]) {
                array[j] = array[j - 1];
                holdIndex = j - 1;
            }
        }
        array[holdIndex] = hold;
    }
}

int main() {
    int numbers[10];
    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
    }

    sortByInserts(numbers);

    for (int i = 0; i < 10; i++) {
        cout << numbers[i];
    }

    return 0;
}