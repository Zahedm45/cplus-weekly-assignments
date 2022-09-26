//
// Created by MD. Zahed on 26/09/2022.
//
#include <iostream>
#include <vector>

using namespace std;
void exercise_one();
void exercise_two();


int week1() {

    exercise_two();
    return 0;
}


void exercise_one(){
    int n, result;
    cin >> n;

    result = 0;
    for (int i = 0; i <= n; ++i) {
        result += i;
    }

    cout << result << endl;

}


void exercise_two() {
    int n, result;
    cin >> n;



    int x = 60; // change this number, to which the computer calculate prime factors
    vector<vector<int>> list;

    for (int i = 2; i <= x; i++) {
        vector<int> num;
        int k = i;
        int j = 2;
        while(k > 1) {
            if (k % j == 0) {
                num.push_back(j);
                k /= j;
                j = 2;
                if (j > x) {
                    num.push_back(i);
                    break;
                }
            }
            else {
                j++;
            }
        }
        list.push_back(num);
    }

    for (int i = 0; i < list.size(); i++) {
        vector<int> num = list[i];
        cout << i + 2 << " = ";
        int stack = 1;
        for (int j = 0; j < num.size(); j++) {
            cout << num[j] << " ";
        }
        cout << "\n";
    }



}