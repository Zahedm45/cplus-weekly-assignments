//
// Created by MD. Zahed on 14/11/2022.
//
#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    string str;
    getline(cin, str);


    size_t pos = 0;
    string token;
    vector<string> vectorStr;
    string delimiter = " ";

    while ((pos = str.find(delimiter)) != string::npos) {     // string::npos = -1
        token = str.substr(0, pos);
        vectorStr.push_back(token);
        str.erase(0, pos + delimiter.length());
    }

    token = str.substr(0, pos);     // The last element
    vectorStr.push_back(token);




    int i = vectorStr.size()-1;

    while (i >= 0) {

        cout << vectorStr[i] << " ";

        i--;
    }
}