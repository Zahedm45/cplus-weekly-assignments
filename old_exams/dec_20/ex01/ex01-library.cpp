#include <iostream>
#include "ex01-library.h"
using namespace std;

// Task 1(a).  Implement this function
Complex **createMatrix(unsigned int m, unsigned int n, Complex c) {
    // Write your code here

    Complex **complex = new Complex*[m];

    for (unsigned int i = 0; i < m; ++i) {
        complex[i] = new Complex[n];
    }


    for (unsigned int i = 0; i < m; ++i) {
        for (unsigned int j = 0; j < n; ++j) {
            complex[i][j].im = c.im;
            complex[i][j].re = c.re;
        }
    }
    return complex;
}

// Task 1(b).  Implement this function
void displayMatrix(Complex **A, unsigned int m, unsigned int n) {
    // Write your code here

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {

            Complex curr = A[i][j];
            if (curr.im >= 0) {
                cout << curr.re << "+" << curr.im << "i ";
            } else {
                cout << curr.re<< curr.im << "i ";

            }

        }
        cout << endl;
    }
}

// Task 1(c).  Implement this function
Complex **createIdentityMatrix(unsigned int n) {
    // Write your code here

    Complex **complex = createMatrix(n, n, {0, 0});

    int k = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (j == i) {
                complex[i][j].re = 1;
            }
        }
    }

    return complex;
}


// Task 1(d).  Implement this function
void multMatrix(Complex **A, Complex **B, Complex **C, unsigned int m, unsigned int n, unsigned int p) {
    // Write your code here

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < p; ++j) {

            C[i][j] = {0, 0};

            for (int k = 0; k < n; ++k) {
                Complex val = mult(A[i][k], B[k][j]);
                C[i][j] = add(C[i][j], val);

            }
        }
    }

}

// Do not modify
Complex add(Complex c, Complex d) {
    Complex result = { c.re + d.re, c.im + d.im };
    return result;
}

// Do not modify
Complex mult(Complex c, Complex d) {
    Complex result;
    result.re = (c.re * d.re) - (c.im * d.im);
    result.im = (c.re * d.im) + (c.im * d.re);
    return result;
}

// Do not modify
void deleteMatrix(Complex **A, unsigned int nRows) {
    for (unsigned int i = 0; i < nRows; i++) { delete[] A[i]; }
    delete[] A;
}
