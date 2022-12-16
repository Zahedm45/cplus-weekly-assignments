//
// Created by MD. Zahed on 15/12/2022.
//
using namespace std;
#include <iostream>


template <class T>
T find_max(T a, T b) {
    return (a > b)? a:b;
}


int main_generic() {

    double val = find_max(10.3, 11.4);
    cout << val << endl;

    return 0;
}