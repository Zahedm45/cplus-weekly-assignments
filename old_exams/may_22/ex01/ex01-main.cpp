#include <iostream>
#include "ex01-library.h"
using namespace std;
int main1() {
    Square **c = nullptr;

    // Here there is some HIDDEN CODE that allocates the chessboard 'c'.
    // If you have completed task (a), you can run this code on your computer
    // by uncommenting the following line:
    c = createChessboard(4, 3);

    c[0][0] = {queen, white};
    c[0][2] = {king, white};
    c[3][0] = {queen, black};
    c[2][1] = {king, black};
    cout << "Chessboard 'c':" << endl;

    // Here there is some HIDDEN CODE that displays the chessboard 'c'.
    // If you have completed task (b), you can run this code on your computer
    // by uncommenting the following line:
     displayChessboard(c, 4, 3);
    cout << "Is the piece in (0,2) threatened? ";
    if (threatened(c, 4, 3, 0, 2)) {
        cout << "Yes!" << endl;
    } else {
        cout << "No!" << endl;
    }
    cout << "Is the piece in (0,0) threatened? ";
    if (threatened(c, 4, 3, 0, 0)) {
        cout << "Yes!" << endl;
    } else {
        cout << "No!" << endl;
    }

    /*Square **d = nullptr;

    // Here there is some HIDDEN CODE that allocates the chessboard 'd'.
    // If you have completed task (a), you can run this code on your computer
    // by uncommenting the following line:
    // d = createChessboard(6, 4);

    d[1][0] = {queen, white};
    d[0][2] = {king, white};
    d[3][2] = {queen, black};
    d[5][3] = {king, black};
    cout << endl << "Chessboard 'd':" << endl;

    // Here there is some HIDDEN CODE that displays the chessboard 'd'.
    // If you have completed task (b), you can run this code on your computer
    // by uncommenting the following line:
    // displayChessboard(d, 6, 4);

    cout << "Is the piece in (1,0) threatened? ";
    if (threatened(d, 6, 4, 1, 0)) {
        cout << "Yes!" << endl;
    } else {
        cout << "No!" << endl;
    }
    cout << "Is the piece in (5,3) threatened? ";
    if (threatened(d, 6, 4, 5, 3)) {
        cout << "Yes!" << endl;
    } else {
        cout << "No!" << endl;
    }

    deleteChessboard(c, 4);
    deleteChessboard(d, 6);*/
    return 0;
}
