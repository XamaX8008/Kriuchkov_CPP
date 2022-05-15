//
// Created by XamaX on 15.05.2022.
//

#include "iostream"
#include "vector"
#include "set"

template<typename T>
void printVector(T myVector) {
    for (int i = 0; i < myVector.size() - 1; i++) {
        std::cout << myVector[i] << " ";
    }
    std::cout << myVector[myVector.size() - 1] << std::endl;
}

template<typename T>
T myMin(T a, T b) {
    if (a < b)
        return a;
    else
        return b;
};

template<typename T>
T myMax(T a, T b) {
    if (a > b)
        return a;
    else
        return b;
}

template<typename T>
void printEnumerable(T (&enumerable)){
    for(auto &value : enumerable) {
        std::cout << value << std::endl;
    }
}

int main() {
    std::vector<std::string> stringVector = {"aaa", "bbb", "ccc"};
    std::vector<int> intVector = {11, 22, 33};
    std::vector<double> doubleVector = {13.75, 22.0};
    printVector(stringVector);
    printVector(intVector);
    printVector(doubleVector);

    int a[] = {0,111,222,333};
    std::vector<int> aa = {1,2,3,4,5,6};

    printEnumerable(a);
    printEnumerable(aa);

    return 0;
};