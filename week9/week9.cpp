//
// Created by MD. Zahed on 14/11/2022.
//

#include <vector>
#include <iostream>

using namespace std;
int fibonacci(int i);
int fibonacci_main(){

    string str;
    getline(cin, str);


    vector<string> vectorStr;

    string delimiter = " ";

    size_t pos = 0;
    string token;

    while ((pos = str.find(delimiter)) != string::npos) {     // string::npos = -1
        token = str.substr(0, pos);
        vectorStr.push_back(token);
        str.erase(0, pos + delimiter.length());
    }

    token = str.substr(0, pos);     // The last element
    vectorStr.push_back(token);


    for (string curr: vectorStr) {
        int integer = stoi(curr);
        int fib = fibonacci(integer);
        cout << fib << " ";

    }

    cout <<""<< endl;




    return 0;
}


int fibonacci(int i) {

    if (i ==1 | i == 0) {
        return 1;
    }

    return fibonacci(i-1) + fibonacci(i-2);

}