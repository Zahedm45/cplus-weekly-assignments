//
// Created by MD. Zahed on 26/09/2022.
//
#include <iostream>
#include <vector>


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



#define NROWS 12
#define NCOLS 16


void display(Tile pTile[NROWS][NCOLS], Player player);
bool is_move_possible(Tile pTile[NROWS][NCOLS], Player player);

int part1_4() {


    Tile playground[NROWS][NCOLS];
    for (int i = 0; i < NROWS; i++) {
        for (int j = 0; j < NCOLS; j++) {
            playground[i][j].x = j;
            playground[i][j].y = i;
            playground[i][j].isWall = (j==0 || i==(NROWS-1) || (i==0 && j!=3) || j==(NCOLS-1));

            if (playground[i][j].isWall) {
                playground[i][j].type = STONE;
            } else {
                playground[i][j].type = WOOD;
            }
        }
    }


    Player player = {5, 5};
    display(playground, player);


    while (true) {
        char user_input;
        cin >> user_input;
        Player new_player;


        switch (user_input) {
            case 'q':
                exit(0);

            case 'l':

                new_player = {player.x - 1, player.y};
                if (is_move_possible(playground, new_player)) {
                    player = new_player;
                }
                break;

            case 'r':
                new_player = {player.x + 1, player.y};
                if (is_move_possible(playground, new_player)) {
                    player = new_player;
                }
                break;

            case 'u':

                new_player = {player.x, player.y - 1};
                if (is_move_possible(playground, new_player)) {
                    player = new_player;
                }
                break;

            case 'd':
                new_player = {player.x, player.y + 1};
                if (is_move_possible(playground, new_player)) {
                    player = new_player;
                }
                break;
            default:
                break;
        }


        display(playground, player);
    }


    return 0;
}

/*int main() {
    part1_4();
    return 0;
}*/




bool is_move_possible(Tile pTile[NROWS][NCOLS], Player player) {

    int px = player.x;
    int py = player.y;


    if (px < 0 || py < 0 || px > NCOLS-1 || py > NROWS-1 ) {
        return false;

    }

    if (!pTile[py][px].isWall) {
        return true;
    }



    return false;

}

void display(Tile pTile[NROWS][NCOLS], Player player) {
    for (int i = 0; i < NROWS; ++i) {
        for (int j = 0; j < NCOLS; ++j) {
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



























