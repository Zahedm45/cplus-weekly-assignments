//
// Created by MD. Zahed on 26/09/2022.
//
#include <iostream>
#include <vector>
#include <stdio.h>



using namespace std;

typedef enum {
    WOOD,
    STONE

} Material;

struct Tile {
    int x, y;
    bool isWall;
    Material type;
};



typedef struct Player{
    int x, y;
}Player;



void display(int rows, int columns, Tile **pTile, Player player);

bool is_move_possible(int rows, int columns, Tile **pTile, Player player);

void free_arr(int rows, int columns, Tile **pTile);

int part1_4() {

    int columns, rows;

    cin >> rows >> columns;



    Tile **playground = new Tile*[rows];

    for (int i = 0; i < rows; ++i) {
        playground[i] = new Tile[columns];
    }





    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            playground[i][j].x = j;
            playground[i][j].y = i;
            playground[i][j].isWall = (j==0 || i==(rows-1) || (i==0 && j!=3) || j==(columns-1));

            if (playground[i][j].isWall) {
                playground[i][j].type = STONE;
            } else {
                playground[i][j].type = WOOD;
            }
        }
    }


    Player player = {columns/2, rows/2};
    display(rows, columns, playground, player);


    while (true) {
        char user_input;
        cin >> user_input;
        Player new_player;


        switch (user_input) {
            case 'q':
                free_arr(rows, columns, playground);
                exit(0);

            case 'l':

                new_player = {player.x - 1, player.y};
                break;

            case 'r':
                new_player = {player.x + 1, player.y};
                break;

            case 'u':

                new_player = {player.x, player.y - 1};
                break;

            case 'd':
                new_player = {player.x, player.y + 1};
                break;
            default:
                continue;
        }

        if (is_move_possible(rows, columns, playground, new_player)) {
            player = new_player;
        }


        display(rows, columns, playground, player);
    }


    return 0;
}



bool is_move_possible(int rows, int columns, Tile **pTile, Player player) {
    int px = player.x;
    int py = player.y;


    if (px < 0 || py < 0 || px > columns-1 || py > rows-1 ) {
        return false;

    }

    if (!pTile[py][px].isWall) {
        return true;
    }



    return false;}

void display(int rows, int columns, Tile **pTile, Player player) {


    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            Tile crrTile = pTile[i][j];
            if (crrTile.x == player.x  && crrTile.y == player.y) {
                cout << "O";
                continue;
            }

            if (pTile[i][j].isWall) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout <<""<< endl;
    }
}



void free_arr(int rows, int columns, Tile **pTile) {

    for (int i = 0; i < rows; ++i) {
        delete[] pTile[i];
    }

    delete[] pTile;

}



int main() {
    part1_4();
    return 0;
}































