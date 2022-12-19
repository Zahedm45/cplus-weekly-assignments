#include "ex04-library.h"
#include <iostream>

//Do not modify
Piece::~Piece(){}

//Do not modify
void Piece::printPosition(){
	cout << "(" << r << "," << c << ")" << endl;
}

//Exercise 4 (a) implement methods of WhitePiece
//put your code here

//Exercise 4 (b) implement methods of BlackPiece
//put your code here
BlackPiece::BlackPiece(int a, int b) {
    r = a;
    c = b;
}

string BlackPiece::getColor() {
    return "black";
}

string BlackPiece::printCode() {
    return "B";
}

void BlackPiece::moveRight() {
    r++;
    c--;

}

void BlackPiece::moveLeft() {
    r++;
    c++;
}



WhitePiece::WhitePiece(int a, int b) {
    r = a;
    c = b;
}

string WhitePiece::getColor() {
    return "white";
}

string WhitePiece::printCode() {
    return "W";
}

void WhitePiece::moveRight() {
    r--;
    c++;

}

void WhitePiece::moveLeft() {
    r--;
    c--;

}
