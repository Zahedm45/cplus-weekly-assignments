//
// Created by MD. Zahed on 26/09/2022.
//
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


#define NROWS 12
#define NCOLS 16


int week4() {


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

    return 0;
}
