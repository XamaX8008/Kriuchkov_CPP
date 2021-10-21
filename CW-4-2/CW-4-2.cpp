//
// Created by XamaX on 16.10.2021.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int count;
    cin >> count;
    vector<int> temperature;
    int sum = 0;
    for (int i = 0; i < count; i++) {
        int completion;
        cin >> completion;
        temperature.push_back(completion);
        sum += completion;
    }

    double averageTemperature = sum / temperature.size();
    int numberOfDays = 0;
    vector<int> resultTemperature;
    for (int i = 0; i < temperature.size(); i++) {
        if (temperature[i] > averageTemperature) {
            numberOfDays++;
            resultTemperature.push_back(i);
        }
    }

    cout << numberOfDays << endl;

    for (int i = 0; i < resultTemperature.size(); i++) {
        cout << resultTemperature[i] << " ";
    }

    return 0;
}
