//
// Created by MD. Zahed on 15/12/2022.
//

#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int write_read_file() {
    int a = 10, b= 20;
    swap(a, b);

    // writes to the file
    ofstream outfile("file_test.txt");
    outfile << "Writing to the file" << endl;
    outfile.close();


    // reads from the file
    ifstream infile;
    infile.open("file_test.txt");
    if (infile.fail()){
        cout << "Failed" << endl;
    }

    string val;
    while (getline(infile, val)) {
        cout << val << "";
    }

    infile.close();
    return 0;
}
