#include <iostream>
#include "ex01-library.h"

using namespace std;

void testMoveLeft(cell ** b,int n,int r,int c){
    bool moved=moveLeft(b,n,r,c);
    cout<<"(" <<r<<','<<c<<") can";
    cout<<(moved?"":"'t") <<" move left"<<endl;
    printBoard(b,n);
}

int main() {
    int n=8;
    cell ** b;
    /* Hidden code for the creation and initialization of the board b.
     * This has been hidden to avoid to disclose the solution to point a.
     * If you solved point a, you can just add: createAndInitBoard(n);
     */
    printBoard(b,n);

    testMoveLeft(b,n,2,3);
    testMoveLeft(b,n,3,4);

    testMoveLeft(b,n,1,6);
    testMoveLeft(b,n,2,7);

    testMoveLeft(b,n,5,6);
    testMoveLeft(b,n,5,0);
    testMoveLeft(b,n,6,1);

    return 0;
}