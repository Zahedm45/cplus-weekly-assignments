//
// Created by MD. Zahed on 14/11/2022.
//


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
    vector<int> vectorStr;
    string delimiter = " ";

    while ((pos = str.find(delimiter)) != string::npos) {     // string::npos = -1
        token = str.substr(0, pos);
        vectorStr.push_back(stoi(token));
        str.erase(0, pos + delimiter.length());
    }

    token = str.substr(0, pos);     // The last element
    vectorStr.push_back(stoi(token));




    int i = vectorStr.size()-1;
    int k = 0;

    while (i >= 0) {

        int rto = vectorStr[i];
        int lto = vectorStr[k];


        if (rto != lto) {
            cout << "no";
            return 0;
        }

        i--;
        k++;
    }



    cout << "yes";
    return 0;
}