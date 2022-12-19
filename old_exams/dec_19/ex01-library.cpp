#include <iostream>
#include "ex01-library.h"

using namespace std;

//Exercise 1 (a) Implement this function
cell ** createAndInitBoard(int n){
	//put your code here

    if (n < 1) return nullptr;

    cell **board = new cell*[n];

    for (int i = 0; i < n; ++i) {
        board[i] = new cell[n];
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            board[i][j].color = computeColor(i, j);

            cellStatus status = emptyC;

            if (board[i][j].color == dark) {
                if (i < 3) status = blackPiece;
                else if (i + 3 >= n) status = whitePiece;
            }

            board[i][j].status = status;

        }
    }

    return board;
}

//Exercise 1 (b) Implement this function
cell ** duplicateBoard(cell ** A, int n){
	//put your code here
}

//Exercise 1 (c) Implement this function
bool moveRight(cell ** A,int n,int r, int c){
	//put your code here
}

//Exercise 1 (d) Implement this function
bool moveLeft(cell ** A,int n,int r, int c){
	//put your code here
}

//Do not modify
cellColor computeColor(int r,int c){
	if((r%2 == 0 && c%2 == 0) || (r%2 != 0 && c%2 != 0)){
		return bright;
	}
	return dark;
}

//Do not modify
void printBoard(cell ** A, int n){
	cout << ' ';
	for(int c=0;c<n;c++){
		cout << c;
	}
	cout << endl;
	for(int r=0;r<n;r++){
		cout << r;
		for(int c=0;c<n;c++){
			//Print ' ' or '#' if empty, or the piece color (W or B)
			switch (A[r][c].status) {
			case emptyC:
				cout << ((A[r][c].color==bright)?' ':'#');
				break;
			case whitePiece:
				cout << "W";
				break;
			case blackPiece:
				cout << "B";
				break;
			}
		}
		cout << endl;
	}
	cout << endl;
}
