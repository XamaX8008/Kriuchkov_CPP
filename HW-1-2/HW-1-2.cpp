//
// Created by XamaX on 29.09.2021.
//

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double N, A, B, X, Y;
    cin >> N >> A >> B >> X >> Y;
    if (N > B) {
        N = (N / 100) * (100 - Y);
        cout << N;
    } else if (N > A) {
        N = (N / 100) * (100 - X);
        cout << N;
    } else {
        cout << N;
    }
}