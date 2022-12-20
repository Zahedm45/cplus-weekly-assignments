#include <iostream>
#include <string>
#include "ex01-library.h"

using namespace std;

int main(void){
    unsigned int n = 4;

    double * A = createAndInitArray(n,1);
    printArray(A,n,"first A");

    //Store old copy of A
    double * B = A;

    //Create new A, and print it
    A = createAndInitArray(n,2);
    printArray(A,n,"second A");

    //Modify old copy of A
    B[0]=0;

    //Print again the new copy of A. It should have not changed
    printArray(A,n,"unmodified second A");

    return 0;
}