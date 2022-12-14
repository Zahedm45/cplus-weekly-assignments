//
// Created by MD. Zahed on 14/12/2022.
//
#include <iostream>
using namespace std;

void run(int input);


int main() {
    int input;
    cin >> input;
    run(input);
    return 0;
}

void run(int input) {
    int i = 2;
    int n = input;
    bool first = true;

    while (true) {

        if (n % i == 0) {

            if (first) {
                cout << i << "";
                first = false;
            } else cout << " * " << i;

            n = n /i;
            i = 2;
            continue;
        }

        if (i >= n) break;
        i++;
    }

}
