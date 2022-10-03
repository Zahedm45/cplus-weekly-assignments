//
// Created by MD. Zahed on 03/10/2022.
//
#include <iostream>
#include <vector>
using namespace std;


void print(vector<int> vector1);


void exercise1(vector<int> a, vector<int> b);

void exercise2(vector<int> a, vector<int> b);

int main() {

    vector<int> a, b;

    char identifier;
    int val;

    string str;
    getline(cin, str);


    for (int i = 0; i < str.size(); ++i) {
        identifier = str[i];
        if (identifier == ' ') {
            continue;
        }


        char k = str[i+2];
        val = k - 48;

        if (identifier == 'a') {
            a.push_back(val);

        } else if (identifier == 'b') {
            b.push_back(val);
        }

        i++;
    }


    //exercise1(a, b);

    exercise2(a, b);


}

void exercise2(vector<int> a, vector<int> b) {

    int i = 0;
    while (i < a.size() || i < b.size()) {

        if (i < a.size()) {
            int a_val = a[i];
            cout << a_val << " ";

        }

        if (i < b.size()) {
            int b_val = b[i];
            cout << b_val << " ";
        }

        i++;
    }


}

void exercise1(vector<int> a, vector<int> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    print(a);
    print(b);
    cout << "\n";

}

void print(vector<int> v) {
    for (int item: v) {
        cout << item << " ";
    }
}


