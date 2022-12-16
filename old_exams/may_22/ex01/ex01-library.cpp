#include <iostream>
#include "ex01-library.h"
bool is_move_possible(Square source, int r1, int c1, int r2, int c2);
using namespace std;

// Task 1(a).  Implement this function
Square **createChessboard(unsigned int m, unsigned int n) {
    // Replace the following with your code

    int row = m, column = n;

    Square **squares = new Square*[row];

    for (int i = 0; i < row; ++i) {
        squares[i] = new Square[column];
    }


    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            squares[i][j].piece = none;
            squares[i][j].team = nobody;
        }
    }
    
    
    return squares;
}

// Task 1(b).  Implement this functions
void displayChessboard(Square **c,
                       unsigned int m, unsigned int n) {
    // Write your code here


    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {

            Square curr = c[i][j];
            if (curr.piece == none) {
                cout << "_";

            } else {

                if (curr.team == black && curr.piece == king) {
                    cout << "K";

                } else if (curr.team == white && curr.piece == king) {
                    cout << "k";

                } else if (curr.team == black && curr.piece == queen) {
                    cout << "Q";

                } else if (curr.team == white && curr.piece == queen) {
                    cout << "q";
                }

            }
            cout << " ";
        }
        cout << endl;
    }

}

// Task 1(c).  Implement this function
bool move(Square **c, unsigned int m, unsigned int n,
          int r1, int c1, int r2, int c2) {
    // Replace the following with your code

    Square source = c[r1][c1];
    Square dest = c[r2][c2];
    if (source.piece == none) return false;
    if (source.team == dest.team) return false;


    int delta_y = abs(r1 - r2);
    int delta_x = abs(c1 - c2);
    int total_delta = delta_x + delta_y;

    if (source.piece == king) {
        if (delta_y == 0 || delta_x == 0) {
            if (total_delta > 1) return false;

        } else {
            if (total_delta > 2) return false;
        }

        c[r2][c2].piece = king;

    } else {

        if (delta_y == 0 || delta_x == 0) {
        } else {
            if (delta_y % delta_x != 0) return false;
        }
        c[r2][c2].piece = queen;

    }

    c[r2][c2].team = source.team;

    c[r1][c1].team = nobody;
    c[r1][c1].piece = none;
    return true;

}

// Task 1(d).  Implement this function
bool threatened(Square **c, unsigned int m, unsigned int n, int row, int col) {
    // Replace the following with your code

    Square dest = c[row][col];
    if (dest.piece == none) return false;

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == row && j == col) continue;
            Square curr = c[i][j];
            if (curr.team == dest.team) continue;

            if (curr.piece != none) {

                if (is_move_possible(curr, i, j, row, col)) {
                    return true;
                }
            }

        }
    }


    return false;
}

// Do not modify
void deleteChessboard(Square **c, unsigned int m) {
    for (unsigned int i = 0; i < m; i++) {
        delete[] c[i];
    }
    delete[] c;
}

bool is_move_possible(Square source, int r1, int c1, int r2, int c2) {

    int delta_y = abs(r1 - r2);
    int delta_x = abs(c1 - c2);
    int total_delta = delta_x + delta_y;

    if (source.piece == king) {
        if (delta_y == 0 || delta_x == 0) {
            if (total_delta > 1) return false;

        } else {
            if (total_delta > 2) return false;
        }

    } else {

        if (delta_y == 0 || delta_x == 0) {
        } else {
            if (delta_y % delta_x != 0) return false;
        }
    }

    return true;
}
