//
// Created by XamaX on 22.10.2021.
//

#include <iostream>

using namespace std;

void sortBubble(int* array) {
    int hold;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (array[j] > array[j + 1]) {
                hold = array[j];
                array[j] = array[j + 1];
                array[j + 1] = hold;
            }
        }
    }
}

int main() {
    int numbers[10];
    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
    }

    sortBubble(numbers);

    for (int i = 0; i < 10; i++) {
        cout << numbers[i];
    }

    return 0;
};
